	THUMB_FUNC_START sub_08074B18
sub_08074B18: @ 0x08074B18
	push {r4,r5,lr}
	ldr r4, _08074B48  @ =gRam
	ldr r1, _08074B4C  @ =0x00000BDA
	add r0, r4, r1
	ldrh r0, [r0]
	lsl r0, r0, #8
	ldr r2, _08074B50  @ =0x00000BDC
	add r1, r4, r2
	ldrh r1, [r1]
	bl Div
	add r2, r0, #0
	ldr r3, _08074B54  @ =0x00000BDE
	add r0, r4, r3
	ldrh r0, [r0]
	cmp r0, #0
	beq _08074B60
	ldr r1, _08074B58  @ =gUnknown_0814D9A4
	asr r0, r2, #1
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r5, _08074B5C  @ =0x0000096C
	add r0, r4, r5
	b _08074B6C
_08074B48:
	.4byte gRam
_08074B4C:
	.4byte 0x00000BDA
_08074B50:
	.4byte 0x00000BDC
_08074B54:
	.4byte 0x00000BDE
_08074B58:
	.4byte gUnknown_0814D9A4
_08074B5C:
	.4byte 0x0000096C
_08074B60:
	ldr r1, _08074BB0  @ =gUnknown_0814DA25
	asr r0, r2, #1
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r2, _08074BB4  @ =0x0000096C
	add r0, r4, r2
_08074B6C:
	strb r1, [r0]
	ldr r1, _08074BB8  @ =gRam
	ldr r3, _08074BB4  @ =0x0000096C
	add r0, r1, r3
	ldrb r2, [r0]
	ldr r5, _08074BBC  @ =0x00000BDC
	add r0, r1, r5
	ldrh r0, [r0]
	add r3, r2, #0
	mul r3, r0, r3
	add r0, r3, #0
	lsl r0, r0, #16
	lsr r3, r0, #24
	mov r5, #151
	lsl r5, r5, #4
	add r4, r1, r5
	mov r2, #0
	strb r3, [r4]
	add r5, r5, #1
	add r0, r1, r5
	strb r2, [r0]
	sub r5, r5, #4
	add r0, r1, r5
	strb r2, [r0]
	ldr r0, _08074BC0  @ =0x00000BDE
	add r1, r1, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _08074BAA
	lsl r0, r3, #1
	strb r0, [r4]
_08074BAA:
	pop {r4,r5}
	pop {r0}
	bx r0
_08074BB0:
	.4byte gUnknown_0814DA25
_08074BB4:
	.4byte 0x0000096C
_08074BB8:
	.4byte gRam
_08074BBC:
	.4byte 0x00000BDC
_08074BC0:
	.4byte 0x00000BDE
	THUMB_FUNC_END sub_08074B18

