	THUMB_FUNC_START sub_08102CBC
sub_08102CBC: @ 0x08102CBC
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_081031AC
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _08102D72
	ldr r5, _08102D78  @ =gRam
	ldr r1, _08102D7C  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #1
	bhi _08102CFE
	add r0, r4, #0
	bl sub_0810307C
	ldr r2, _08102D80  @ =0x00000996
	add r0, r5, r2
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _08102CFE
	mov r0, #104
	mov r1, #0
	bl sub_0812A324
_08102CFE:
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _08102D72
	ldr r5, _08102D78  @ =gRam
	ldr r1, _08102D84  @ =0x00001052
	add r0, r5, r1
	add r2, r4, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08102D34
	mov r0, #10
	strb r0, [r2]
	ldr r0, _08102D88  @ =0x00000F92
	add r2, r5, r0
	add r2, r4, r2
	ldrb r0, [r2]
	add r0, r0, #1
	mov r1, #3
	and r0, r0, r1
	strb r0, [r2]
_08102D34:
	ldr r1, _08102D80  @ =0x00000996
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _08102D56
	add r0, r4, #0
	mov r1, #31
	bl sub_080C2CB4
	bl sub_080CA32C
	ldr r2, _08102D8C  @ =0x00000F62
	add r1, r5, r2
	add r1, r4, r1
	strb r0, [r1]
_08102D56:
	add r0, r4, #0
	bl Sprite3_Move
	ldr r1, _08102D90  @ =gUnknown_0817B90C
	ldr r2, _08102D7C  @ =0x00000F52
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_08102D72:
	pop {r4,r5}
	pop {r0}
	bx r0
_08102D78:
	.4byte gRam
_08102D7C:
	.4byte 0x00000F52
_08102D80:
	.4byte 0x00000996
_08102D84:
	.4byte 0x00001052
_08102D88:
	.4byte 0x00000F92
_08102D8C:
	.4byte 0x00000F62
_08102D90:
	.4byte gUnknown_0817B90C
	THUMB_FUNC_END sub_08102CBC

