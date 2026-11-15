	THUMB_FUNC_START sub_0803D010
sub_0803D010: @ 0x0803D010
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #80
	ldrh r0, [r1]
	mov r1, #128
	lsl r1, r1, #8
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _0803D032
	b _0803D128
_0803D032:
	ldr r1, [r7]
	mov r2, #50
	ldrsh r0, [r1, r2]
	ldr r1, [r7]
	ldrh r2, [r1, #54]
	sub r1, r2, #4
	add r3, r1, #0
	lsl r2, r3, #16
	asr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl 0x08009310
	lsl r1, r0, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _0803D080
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #31]
	mov r3, #63
	and r2, r2, r3
	add r3, r2, #0
	mov r4, #128
	add r2, r3, #0
	orr r2, r2, r4
	add r3, r2, #0
	strb r3, [r1, #31]
	ldrb r1, [r0, #29]
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #128
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #29]
	mov r0, #1
	b _0803D12C
_0803D080:
	ldr r1, [r7]
	mov r2, #50
	ldrsh r0, [r1, r2]
	ldr r1, [r7]
	ldrh r2, [r1, #54]
	sub r1, r2, #4
	add r3, r1, #0
	lsl r2, r3, #16
	asr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl 0x08009310
	lsl r1, r0, #16
	lsr r0, r1, #16
	ldr r1, _0803D0B8  @ =0x0000021F
	cmp r0, r1
	beq _0803D0D0
	ldr r1, _0803D0B8  @ =0x0000021F
	cmp r0, r1
	bgt _0803D0BC
	mov r1, #132
	lsl r1, r1, #2
	cmp r0, r1
	beq _0803D0D0
	b _0803D0FC
_0803D0B8:
	.4byte 0x0000021F
_0803D0BC:
	mov r1, #153
	lsl r1, r1, #2
	cmp r0, r1
	beq _0803D0D0
	ldr r1, _0803D0CC  @ =0x00000273
	cmp r0, r1
	beq _0803D0D0
	b _0803D0FC
_0803D0CC:
	.4byte 0x00000273
_0803D0D0:
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #31]
	mov r3, #63
	and r2, r2, r3
	add r3, r2, #0
	mov r4, #128
	add r2, r3, #0
	orr r2, r2, r4
	add r3, r2, #0
	strb r3, [r1, #31]
	ldrb r1, [r0, #29]
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #128
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #29]
	mov r0, #1
	b _0803D12C
_0803D0FC:
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #31]
	mov r3, #63
	and r2, r2, r3
	add r3, r2, #0
	mov r4, #64
	add r2, r3, #0
	orr r2, r2, r4
	add r3, r2, #0
	strb r3, [r1, #31]
	ldrb r1, [r0, #29]
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #64
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #29]
	mov r0, #0
	b _0803D12C
_0803D128:
	mov r0, #0
	b _0803D12C
_0803D12C:
	add sp, sp, #8
	pop {r4,r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0803D010

