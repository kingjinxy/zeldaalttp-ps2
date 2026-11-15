	THUMB_FUNC_START sub_08124C28
sub_08124C28: @ 0x08124C28
	push {r4,r5,lr}
	sub sp, sp, #4
	bl sub_08124BA8
	mov r0, #0
	mov r1, #68
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	asr r5, r0, #24
	cmp r5, #0
	bne _08124CDA
	bl sub_081333E8
	ldr r4, _08124CE4  @ =gRam
	ldr r0, _08124CE8  @ =0x00001770
	add r1, r4, r0
	mov r0, #1
	strb r0, [r1]
	mov r1, sp
	ldr r2, _08124CEC  @ =0x00000E1F
	add r0, r4, r2
	ldrb r1, [r1]
	add r0, r0, r1
	strb r5, [r0]
	mov r1, sp
	add r2, r2, #20
	add r0, r4, r2
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #160
	strb r1, [r0]
	ldr r0, _08124CF0  @ =gUnknown_020068F8
	strb r5, [r0]
	mov r1, sp
	sub r2, r2, #120
	add r0, r4, r2
	ldrb r1, [r1]
	add r0, r0, r1
	strb r5, [r0]
	mov r1, #182
	lsl r1, r1, #5
	add r0, r4, r1
	ldrh r1, [r0]
	mov r2, #150
	lsl r2, r2, #4
	add r0, r4, r2
	mov r5, #0
	strh r1, [r0]
	ldr r1, _08124CF4  @ =0x000016C4
	add r0, r4, r1
	ldrh r1, [r0]
	add r2, r2, #4
	add r0, r4, r2
	strh r1, [r0]
	mov r0, sp
	ldrb r0, [r0]
	bl sub_080ABA78
	mov r1, sp
	ldr r2, _08124CF8  @ =0x00000A92
	add r0, r4, r2
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #255
	strb r1, [r0]
	mov r0, sp
	ldr r1, _08124CFC  @ =0x00000A88
	add r4, r4, r1
	ldrb r0, [r0]
	add r4, r4, r0
	strb r5, [r4]
	mov r4, #0
	mov r5, sp
_08124CBE:
	ldrb r0, [r5]
	add r1, r4, #0
	bl sub_08124A8C
	add r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #3
	bls _08124CBE
	ldr r0, _08124CE4  @ =gRam
	ldr r2, _08124D00  @ =0x00000A3E
	add r0, r0, r2
	mov r1, #2
	strb r1, [r0]
_08124CDA:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08124CE4:
	.4byte gRam
_08124CE8:
	.4byte 0x00001770
_08124CEC:
	.4byte 0x00000E1F
_08124CF0:
	.4byte gUnknown_020068F8
_08124CF4:
	.4byte 0x000016C4
_08124CF8:
	.4byte 0x00000A92
_08124CFC:
	.4byte 0x00000A88
_08124D00:
	.4byte 0x00000A3E
	THUMB_FUNC_END sub_08124C28

