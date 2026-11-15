	THUMB_FUNC_START sub_080CEE30
sub_080CEE30: @ 0x080CEE30
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r8, r6
	lsl r1, r1, #24
	lsr r5, r1, #24
	mov r12, r5
	ldr r4, _080CEF38  @ =gRam
	ldr r1, _080CEF3C  @ =0x00000FF2
	add r0, r4, r1
	add r0, r0, r5
	mov r9, r0
	ldrb r0, [r0]
	cmp r0, #136
	beq _080CEE66
	ldr r2, _080CEF40  @ =0x00000D84
	add r0, r4, r2
	add r0, r5, r0
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _080CEE66
	b _080CEF8C
_080CEE66:
	ldr r3, _080CEF44  @ =0x00000EE2
	add r0, r4, r3
	add r0, r5, r0
	ldrb r0, [r0]
	mov r7, #150
	lsl r7, r7, #4
	add r2, r4, r7
	strb r0, [r2]
	ldr r1, _080CEF48  @ =0x00000F02
	add r0, r4, r1
	add r0, r5, r0
	ldrb r1, [r0]
	ldr r3, _080CEF4C  @ =0x00000961
	add r0, r4, r3
	strb r1, [r0]
	ldr r7, _080CEF50  @ =0x00000ED2
	add r0, r4, r7
	add r0, r5, r0
	ldrb r0, [r0]
	ldr r1, _080CEF54  @ =0x00000964
	add r3, r4, r1
	strb r0, [r3]
	add r7, r7, #32
	add r0, r4, r7
	add r0, r5, r0
	ldrb r1, [r0]
	ldr r7, _080CEF58  @ =0x00000965
	add r0, r4, r7
	strb r1, [r0]
	ldr r1, _080CEF5C  @ =0x00001622
	add r0, r4, r1
	ldrb r0, [r0]
	ldr r7, _080CEF60  @ =0x00001623
	add r1, r4, r7
	ldrb r1, [r1]
	lsl r1, r1, #8
	orr r0, r0, r1
	ldrh r1, [r2]
	lsl r0, r0, #16
	asr r0, r0, #16
	sub r0, r0, r1
	lsl r0, r0, #16
	mov r1, #128
	lsl r1, r1, #13
	add r0, r0, r1
	lsr r0, r0, #16
	cmp r0, #23
	bhi _080CEF8C
	ldr r2, _080CEF64  @ =0x00001624
	add r0, r4, r2
	ldrb r0, [r0]
	add r7, r7, #2
	add r1, r4, r7
	ldrb r1, [r1]
	lsl r1, r1, #8
	orr r0, r0, r1
	ldrh r1, [r3]
	lsl r0, r0, #16
	asr r0, r0, #16
	sub r0, r0, r1
	lsl r0, r0, #16
	ldr r1, _080CEF68  @ =0xFFF80000
	add r0, r0, r1
	lsr r0, r0, #16
	cmp r0, #23
	bhi _080CEF8C
	mov r2, r9
	ldrb r0, [r2]
	cmp r0, #117
	beq _080CEF80
	add r0, r5, #0
	mov r1, #1
	bl sub_080C3FCC
	ldr r3, _080CEF6C  @ =0x00001072
	add r0, r4, r3
	add r0, r5, r0
	mov r1, #15
	strb r1, [r0]
	ldr r7, _080CEF70  @ =0x00001112
	add r1, r4, r7
	add r1, r5, r1
	ldr r2, _080CEF74  @ =0x00000F22
	add r0, r4, r2
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #1
	strb r0, [r1]
	add r3, r3, #144
	add r1, r4, r3
	add r1, r5, r1
	ldr r7, _080CEF78  @ =0x00000F12
	add r0, r4, r7
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #1
	strb r0, [r1]
	ldr r0, _080CEF7C  @ =0x00000F72
	add r1, r4, r0
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _080CEF8C
	.byte 0x00
	.byte 0x00
_080CEF38:
	.4byte gRam
_080CEF3C:
	.4byte 0x00000FF2
_080CEF40:
	.4byte 0x00000D84
_080CEF44:
	.4byte 0x00000EE2
_080CEF48:
	.4byte 0x00000F02
_080CEF4C:
	.4byte 0x00000961
_080CEF50:
	.4byte 0x00000ED2
_080CEF54:
	.4byte 0x00000964
_080CEF58:
	.4byte 0x00000965
_080CEF5C:
	.4byte 0x00001622
_080CEF60:
	.4byte 0x00001623
_080CEF64:
	.4byte 0x00001624
_080CEF68:
	.4byte 0xFFF80000
_080CEF6C:
	.4byte 0x00001072
_080CEF70:
	.4byte 0x00001112
_080CEF74:
	.4byte 0x00000F22
_080CEF78:
	.4byte 0x00000F12
_080CEF7C:
	.4byte 0x00000F72
_080CEF80:
	ldr r1, _080CEF98  @ =0x00001062
	add r0, r4, r1
	add r0, r0, r12
	mov r1, r8
	add r1, r1, #1
	strb r1, [r0]
_080CEF8C:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_080CEF98:
	.4byte 0x00001062
	THUMB_FUNC_END sub_080CEE30
