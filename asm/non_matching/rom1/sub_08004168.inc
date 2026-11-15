	thumb_func_start sub_08004168
sub_08004168: @ 0x08004168
	push {r4, r5, r6, lr}
	adds r6, r0, #0
	movs r5, #0
	ldr r4, _0800423C @ =0x08003B54
	ldr r1, [r4]
	ldr r1, [r1]
	bl sub_080041B4
	orrs r5, r0
	ldr r1, [r4, #4]
	ldr r1, [r1]
	cmp r1, #0
	beq _080041B0
	adds r0, r6, #0
	bl sub_080041B4
	lsls r0, r0, #1
	orrs r5, r0
	ldr r1, [r4, #8]
	ldr r1, [r1]
	cmp r1, #0
	beq _080041B0
	adds r0, r6, #0
	bl sub_080041B4
	lsls r0, r0, #2
	orrs r5, r0
	ldr r1, [r4, #0xc]
	ldr r1, [r1]
	cmp r1, #0
	beq _080041B0
	adds r0, r6, #0
	bl sub_080041B4
	lsls r0, r0, #3
	orrs r5, r0
_080041B0:
	adds r0, r5, #0
	pop {r4, r5, r6, pc}

