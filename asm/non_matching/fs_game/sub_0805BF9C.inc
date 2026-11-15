	THUMB_FUNC_START sub_0805BF9C
sub_0805BF9C: @ 0x0805BF9C
	push {r4,r7,lr}
	sub sp, sp, #16
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl GetNextFrame
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #71
	ldrb r0, [r1]
	cmp r0, #0
	bne _0805BFB8
	b _0805C0BA
_0805BFB8:
	ldr r0, _0805C04C  @ =gUnknown_03006A30
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #71
	ldrb r3, [r2]
	sub r1, r3, #1
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r0, [r1]
	str r0, [r7, #4]
	ldr r0, _0805C050  @ =gUnknown_0201F000
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #82
	ldrb r1, [r2]
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, r1
	ldr r1, _0805C050  @ =gUnknown_0201F000
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #82
	ldrb r2, [r3]
	add r3, r2, #0
	lsl r2, r3, #2
	add r1, r1, r2
	ldr r2, _0805C054  @ =gUnknown_08137B10
	ldr r3, [r7]
	ldrb r4, [r3, #22]
	add r3, r4, #0
	lsl r4, r3, #2
	add r2, r2, r4
	ldr r1, [r1]
	ldr r2, [r2]
	orr r1, r1, r2
	str r1, [r0]
	add r4, r7, #0
	add r4, r4, #12
	ldr r1, [r7, #4]
	ldr r0, [r7]
	bl sub_0803CECC
	lsl r1, r0, #24
	lsr r0, r1, #24
	add r1, r0, #0
	strh r1, [r4]
	add r0, r7, #0
	add r0, r0, #12
	ldrh r1, [r0]
	mov r2, #15
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _0805C064
	add r0, r7, #0
	add r0, r0, #12
	ldrh r1, [r0]
	cmp r1, #15
	bhi _0805C058
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #4
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #28]
	b _0805C064
	.byte 0x00
	.byte 0x00
_0805C04C:
	.4byte gUnknown_03006A30
_0805C050:
	.4byte gUnknown_0201F000
_0805C054:
	.4byte gUnknown_08137B10
_0805C058:
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #251
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #28]
_0805C064:
	ldr r0, _0805C0C4  @ =gLCDRegisterBuffer
	ldr r1, [r7, #4]
	ldrb r0, [r0]
	ldrb r1, [r1, #10]
	cmp r0, r1
	bne _0805C092
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #100
	ldrh r2, [r1]
	add r0, r2, #0
	bl sub_0800D67C
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #24]
_0805C092:
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #71
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7, #4]
	add r1, r0, #0
	add r0, r0, #61
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #248
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
_0805C0BA:
	add sp, sp, #16
	pop {r4,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0805C0C4:
	.4byte gLCDRegisterBuffer
	THUMB_FUNC_END sub_0805BF9C

