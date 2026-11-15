	thumb_func_start sub_0800402C
sub_0800402C: @ 0x0800402C
	push {lr}
	bl sub_08009450
	cmp r1, #3
	beq _08004046
	cmp r1, #2
	beq _08004072
	cmp r1, #0x47
	beq _0800409E
	cmp r1, #0x48
	beq _0800409E
	pop {pc}
_08004044:
	.byte 0x00, 0xB5
_08004046:
	movs r1, #0x50
	ldrh r2, [r0, r1]
	ldr r3, _0800421C @ =0x00003FFF
	ands r2, r3
	ldr r3, _08004220 @ =0x00008000
	orrs r2, r3
	strh r2, [r0, r1]
	ldrb r2, [r0, #0x1f]
	movs r3, #0x3f
	ands r3, r2
	movs r2, #0x40
	orrs r2, r3
	strb r2, [r0, #0x1f]
	ldrb r2, [r0, #0x1d]
	movs r3, #0x3f
	ands r2, r3
	movs r3, #0x40
	orrs r2, r3
	strb r2, [r0, #0x1d]
	pop {pc}
	.align 2, 0
_08004070:
	.byte 0x00, 0xB5
_08004072:
	movs r1, #0x50
	ldrh r2, [r0, r1]
	ldr r3, _0800421C @ =0x00003FFF
	ands r2, r3
	ldr r3, _08004224 @ =0x00004000
	orrs r2, r3
	strh r2, [r0, r1]
	ldrb r2, [r0, #0x1f]
	movs r3, #0x3f
	ands r3, r2
	movs r2, #0x80
	orrs r2, r3
	strb r2, [r0, #0x1f]
	ldrb r2, [r0, #0x1d]
	movs r3, #0x3f
	ands r2, r3
	movs r3, #0x80
	orrs r2, r3
	strb r2, [r0, #0x1d]
	pop {pc}
	.align 2, 0
_0800409C:
	.byte 0x00, 0xB5
_0800409E:
	movs r1, #0x50
	ldrh r2, [r0, r1]
	ldr r3, _08004228 @ =0x0000C000
	orrs r2, r3
	strh r2, [r0, r1]
	ldrb r2, [r0, #0x1f]
	movs r3, #0x3f
	ands r3, r2
	movs r2, #0x40
	orrs r2, r3
	strb r2, [r0, #0x1f]
	ldrb r2, [r0, #0x1d]
	movs r3, #0x3f
	ands r2, r3
	movs r3, #0x40
	orrs r2, r3
	strb r2, [r0, #0x1d]
	pop {pc}
	.align 2, 0

