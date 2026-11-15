	THUMB_FUNC_START sub_0805C878
sub_0805C878: @ 0x0805C878
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldr r1, [r0, #116]
	str r1, [r7, #4]
	ldr r1, [r7]
	ldrb r0, [r1, #10]
	cmp r0, #1
	beq _0805C918
	cmp r0, #1
	bgt _0805C898
	cmp r0, #0
	beq _0805C8A6
	b _0805CA7C
_0805C898:
	cmp r0, #2
	bne _0805C89E
	b _0805C990
_0805C89E:
	cmp r0, #3
	bne _0805C8A4
	b _0805CA04
_0805C8A4:
	b _0805CA7C
_0805C8A6:
	ldr r0, [r7, #4]
	add r1, r0, #0
	add r1, r1, #64
	str r1, [r7, #4]
	ldr r0, [r7, #4]
	ldrb r1, [r0]
	cmp r1, #255
	beq _0805C8C8
	ldr r0, [r7, #4]
	ldrb r1, [r0]
	sub r0, r1, #1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #30
	bhi _0805C8CA
	b _0805C8C8
_0805C8C8:
	b _0805C8CC
_0805C8CA:
	b _0805C8A6
_0805C8CC:
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r7, #4]
	ldr r3, [r1, #116]
	sub r1, r2, r3
	lsr r2, r1, #2
	add r3, r2, #0
	ldr r2, _0805C914  @ =0x0000FFF8
	add r1, r3, r2
	add r2, r0, #0
	add r0, r0, #126
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	lsr r2, r1, #4
	add r1, r2, #0
	add r2, r0, #0
	add r0, r0, #115
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	b _0805CA7C
_0805C914:
	.4byte 0x0000FFF8
_0805C918:
	ldr r0, [r7, #4]
	sub r1, r0, #1
	str r1, [r7, #4]
	ldr r0, [r7, #4]
	ldrb r1, [r0]
	cmp r1, #255
	beq _0805C938
	ldr r0, [r7, #4]
	ldrb r1, [r0]
	sub r0, r1, #1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #30
	bhi _0805C93A
	b _0805C938
_0805C938:
	b _0805C93C
_0805C93A:
	b _0805C918
_0805C93C:
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #116]
	add r1, r2, #0
	ldr r3, [r7, #4]
	add r2, r3, #0
	sub r1, r1, r2
	add r2, r1, #0
	lsl r1, r2, #4
	add r2, r1, #0
	ldr r3, _0805C98C  @ =0x0000FFF8
	add r1, r2, r3
	add r2, r0, #0
	add r0, r0, #124
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	lsr r2, r1, #4
	add r1, r2, #0
	add r2, r0, #0
	add r0, r0, #115
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	b _0805CA7C
	.byte 0x00
	.byte 0x00
_0805C98C:
	.4byte 0x0000FFF8
_0805C990:
	ldr r0, [r7, #4]
	add r1, r0, #0
	sub r1, r1, #64
	str r1, [r7, #4]
	ldr r0, [r7, #4]
	ldrb r1, [r0]
	cmp r1, #255
	beq _0805C9B2
	ldr r0, [r7, #4]
	ldrb r1, [r0]
	sub r0, r1, #1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #30
	bhi _0805C9B4
	b _0805C9B2
_0805C9B2:
	b _0805C9B6
_0805C9B4:
	b _0805C990
_0805C9B6:
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #116]
	ldr r3, [r7, #4]
	sub r1, r2, r3
	lsr r2, r1, #2
	add r3, r2, #0
	ldr r2, _0805CA00  @ =0x0000FFF8
	add r1, r3, r2
	add r2, r0, #0
	add r0, r0, #126
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	lsr r2, r1, #4
	add r1, r2, #0
	add r2, r0, #0
	add r0, r0, #115
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	b _0805CA7C
	.byte 0x00
	.byte 0x00
_0805CA00:
	.4byte 0x0000FFF8
_0805CA04:
	ldr r0, [r7, #4]
	add r1, r0, #1
	str r1, [r7, #4]
	ldr r0, [r7, #4]
	ldrb r1, [r0]
	cmp r1, #255
	beq _0805CA24
	ldr r0, [r7, #4]
	ldrb r1, [r0]
	sub r0, r1, #1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #30
	bhi _0805CA26
	b _0805CA24
_0805CA24:
	b _0805CA28
_0805CA26:
	b _0805CA04
_0805CA28:
	ldr r0, [r7]
	ldr r2, [r7, #4]
	add r1, r2, #0
	ldr r2, [r7]
	ldr r3, [r2, #116]
	add r2, r3, #0
	sub r1, r1, r2
	add r2, r1, #0
	lsl r1, r2, #4
	add r2, r1, #0
	ldr r3, _0805CA78  @ =0x0000FFF8
	add r1, r2, r3
	add r2, r0, #0
	add r0, r0, #124
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	lsr r2, r1, #4
	add r1, r2, #0
	add r2, r0, #0
	add r0, r0, #115
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	b _0805CA7C
	.byte 0x00
	.byte 0x00
_0805CA78:
	.4byte 0x0000FFF8
_0805CA7C:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805C878

