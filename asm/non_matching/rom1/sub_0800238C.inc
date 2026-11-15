	thumb_func_start sub_0800238C
sub_0800238C: @ 0x0800238C
	push {r4}
	ldr r2, [r1, #0x30]
	str r2, [r0, #0x30]
	ldr r2, [r1, #0x34]
	str r2, [r0, #0x34]
	ldr r2, [r1, #0x38]
	str r2, [r0, #0x38]
	movs r3, #0x50
	ldrh r2, [r1, r3]
	strh r2, [r0, r3]
	ldr r2, [r1, #0x1c]
	ldr r3, _08002418 @ =0xC000C000
	ands r2, r3
	ldr r4, [r0, #0x1c]
	ldr r3, _0800241C @ =0x3FFF3FFF
	ands r4, r3
	orrs r4, r2
	str r4, [r0, #0x1c]
	movs r4, #0x5e
	ldrb r2, [r1, r4]
	movs r3, #3
	ands r2, r3
	ldrb r3, [r0, r4]
	lsrs r3, r3, #2
	lsls r3, r3, #2
	orrs r2, r3
	strb r2, [r0, r4]
	pop {r4}
	mov pc, lr
	.align 2, 0

