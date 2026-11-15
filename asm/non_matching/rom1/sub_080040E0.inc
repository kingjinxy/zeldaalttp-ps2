	thumb_func_start sub_080040E0
sub_080040E0: @ 0x080040E0
	push {r0, r1, r4, r5, r6, lr}
	movs r6, #0x40
	cmp r0, #0
	beq _0800414A
	ldr r5, _0800422C @ =0x0813E74C
	ldr r2, _08004230 @ =0x80000000
	cmp r0, r2
	blo _080040F4
	mvns r0, r0
	adds r0, #1
_080040F4:
	cmp r1, r2
	blo _080040FC
	mvns r1, r1
	adds r1, #1
_080040FC:
	lsls r2, r1, #8
	adds r1, r0, #0
	adds r0, r2, #0
	bl sub_080009AC
	ldr r1, _08004234 @ =0x00000106
	cmp r0, r1
	bhs _08004120
	movs r1, #0x6e
	cmp r0, r1
	bhs _0800411A
	movs r6, #0
	movs r1, #0
	movs r2, #0x10
	b _08004130
_0800411A:
	movs r1, #0x10
	movs r2, #0x20
	b _08004130
_08004120:
	ldr r1, _08004238 @ =0x00000280
	cmp r0, r1
	bhs _0800412C
	movs r1, #0x20
	movs r2, #0x30
	b _08004130
_0800412C:
	movs r1, #0x30
	movs r2, #0x3f
_08004130:
	lsls r3, r1, #1
	adds r3, r3, r5
	ldrh r4, [r3]
	cmp r0, r4
	blo _08004144
	ldrh r4, [r3, #2]
	cmp r0, r4
	bhs _08004144
	adds r6, r1, #1
	b _0800414A
_08004144:
	adds r1, #1
	cmp r1, r2
	blo _08004130
_0800414A:
	adds r2, r6, #0
	pop {r0, r1, r4, r5, r6}
	lsls r0, r0, #1
	bhs _0800415C
	movs r0, #0x40
	lsls r1, r1, #1
	bhs _08004162
_08004158:
	adds r0, r0, r2
	pop {pc}
_0800415C:
	movs r0, #0xc0
	lsls r1, r1, #1
	bhs _08004158
_08004162:
	subs r0, r0, r2
	pop {pc}
	.align 2, 0

