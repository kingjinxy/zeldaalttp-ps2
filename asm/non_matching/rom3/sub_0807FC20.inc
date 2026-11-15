	THUMB_FUNC_START sub_0807FC20
sub_0807FC20: @ 0x0807FC20
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	mov r12, r0
	ldr r4, _0807FCB4  @ =gRam
	mov r0, #150
	lsl r0, r0, #4
	add r5, r4, r0
	mov r0, #0
	ldrsb r0, [r5, r0]
	mov r1, #252
	and r0, r0, r1
	cmp r0, #252
	beq _0807FCF8
	ldrb r1, [r5]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r2, #151
	lsl r2, r2, #4
	add r2, r2, r4
	mov r8, r2
	strb r0, [r2]
	mov r2, #3
	add r6, r2, #0
	and r6, r6, r1
	ldr r3, _0807FCB8  @ =0x000009EA
	add r0, r4, r3
	strh r6, [r0]
	ldr r0, _0807FCBC  @ =0x00000961
	add r0, r0, r4
	mov r9, r0
	ldrb r1, [r0]
	add r7, r2, #0
	and r7, r7, r1
	ldr r2, _0807FCC0  @ =0x000009EE
	add r0, r4, r2
	strh r7, [r0]
	add r3, r3, #10
	add r2, r4, r3
	ldrh r0, [r2]
	add r0, r0, r12
	ldrb r5, [r0, #2]
	ldr r0, _0807FCC4  @ =0x00000968
	add r3, r4, r0
	strh r5, [r3]
	ldrh r0, [r2]
	add r0, r0, #3
	strh r0, [r2]
	lsl r1, r1, #24
	lsr r1, r1, #26
	mov r2, r9
	strb r1, [r2]
	ldr r2, _0807FCC8  @ =0x00000971
	add r0, r4, r2
	strb r1, [r0]
	mov r1, r8
	ldrh r0, [r1]
	lsl r0, r0, #16
	asr r0, r0, #17
	strh r0, [r1]
	cmp r5, #247
	bgt _0807FCD0
	ldr r0, _0807FCCC  @ =gUnknown_08152BD0
	mov r2, #0
	ldrsh r1, [r3, r2]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r0, [r1]
	bl _call_via_r0
	b _0807FD62
	.byte 0x00
	.byte 0x00
_0807FCB4:
	.4byte gRam
_0807FCB8:
	.4byte 0x000009EA
_0807FCBC:
	.4byte 0x00000961
_0807FCC0:
	.4byte 0x000009EE
_0807FCC4:
	.4byte 0x00000968
_0807FCC8:
	.4byte 0x00000971
_0807FCCC:
	.4byte gUnknown_08152BD0
_0807FCD0:
	lsl r0, r5, #1
	mov r1, #14
	and r0, r0, r1
	lsl r0, r0, #3
	lsl r1, r7, #2
	orr r0, r0, r1
	orr r6, r6, r0
	strh r6, [r3]
	ldr r1, _0807FCF4  @ =gUnknown_081530B0
	mov r2, #0
	ldrsh r0, [r3, r2]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	b _0807FD62
	.byte 0x00
	.byte 0x00
_0807FCF4:
	.4byte gUnknown_081530B0
_0807FCF8:
	ldrb r1, [r5]
	ldr r3, _0807FD70  @ =0x00000965
	add r0, r4, r3
	strb r1, [r0]
	ldr r0, _0807FD74  @ =0x00000961
	add r2, r4, r0
	ldrb r1, [r2]
	sub r3, r3, #1
	add r0, r4, r3
	strb r1, [r0]
	ldrh r0, [r0]
	mov r1, #252
	lsl r1, r1, #2
	and r1, r1, r0
	lsr r1, r1, #3
	mov r0, #151
	lsl r0, r0, #4
	add r6, r4, r0
	ldr r3, _0807FD78  @ =gUnknown_03002C24
	ldrh r0, [r3]
	add r0, r0, r12
	ldrb r0, [r0, #1]
	strb r0, [r2]
	ldrh r0, [r3]
	add r0, r0, r12
	ldrb r0, [r0, #2]
	strb r0, [r5]
	ldrh r2, [r5]
	mov r0, #252
	lsl r0, r0, #4
	and r0, r0, r2
	lsl r0, r0, #1
	orr r1, r1, r0
	strh r1, [r6]
	ldrh r0, [r3]
	add r0, r0, r12
	ldrb r1, [r0, #2]
	mov r0, #63
	and r0, r0, r1
	ldr r1, _0807FD7C  @ =0x00000968
	add r2, r4, r1
	strh r0, [r2]
	ldrh r0, [r3]
	add r0, r0, #3
	strh r0, [r3]
	ldr r1, _0807FD80  @ =gUnknown_08152FB0
	mov r3, #0
	ldrsh r0, [r2, r3]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
_0807FD62:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807FD70:
	.4byte 0x00000965
_0807FD74:
	.4byte 0x00000961
_0807FD78:
	.4byte gUnknown_03002C24
_0807FD7C:
	.4byte 0x00000968
_0807FD80:
	.4byte gUnknown_08152FB0
	THUMB_FUNC_END sub_0807FC20

