	thumb_func_start sub_08007740
sub_08007740: @ 0x08007740
	push {lr}
	strh r3, [r0, #0x10]
	movs r2, #0xa4
	cmp r3, r2
	bhs _08007750
	ldrb r2, [r0, #0xa]
	lsrs r2, r2, #1
	adds r3, r3, r2
_08007750:
	strb r3, [r0, #0xc]
	push {r0, r1}
	ldrb r1, [r0, #0xc]
	ldrb r2, [r0, #0x11]
	mov r3, sl
	ldr r0, [r3, #0x28]
	strb r2, [r0, #0x1b]
	bl sub_08003840
	pop {r0, r1}
_08007764:
	mov r3, sl
	ldr r2, [r3, #0x28]
	movs r4, #0x21
	ldrb r3, [r2, r4]
	strb r3, [r0, #0x12]
	movs r4, #0x28
	ldrb r3, [r2, r4]
	strb r3, [r0, #0xd]
	movs r4, #0x29
	ldrb r3, [r2, r4]
	strb r3, [r0, #0xe]
	pop {pc}

