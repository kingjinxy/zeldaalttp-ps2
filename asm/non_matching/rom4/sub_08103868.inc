	THUMB_FUNC_START sub_08103868
sub_08103868: @ 0x08103868
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	ldr r6, _081038A0  @ =gRam
	ldr r1, _081038A4  @ =0x00000F82
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _08103918
	sub r1, r1, #48
	add r0, r6, r1
	add r0, r4, r0
	ldrb r1, [r0]
	cmp r1, #0
	bne _081038A8
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	add r2, r4, #0
	bl sub_080C632C
	lsl r0, r0, #24
	cmp r0, #0
	bne _08103972
	b _081038C8
_081038A0:
	.4byte gRam
_081038A4:
	.4byte 0x00000F82
_081038A8:
	mov r2, #1
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	beq _081038C2
	ldr r1, _08103904  @ =0x00000FC2
	add r0, r6, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	bne _081038C8
_081038C2:
	add r0, r4, #0
	bl sub_08103C70
_081038C8:
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _08103972
	add r0, r5, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _08103972
	ldr r2, _08103908  @ =gRam
	ldr r1, _0810390C  @ =0x00001172
	add r0, r2, r1
	add r0, r5, r0
	mov r1, #1
	strb r1, [r0]
	ldr r1, _08103910  @ =gUnknown_0817BA30
	ldr r0, _08103914  @ =0x00000F52
	add r2, r2, r0
	add r2, r5, r2
	ldrb r0, [r2]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r5, #0
	bl _call_via_r1
	b _08103972
_08103904:
	.4byte 0x00000FC2
_08103908:
	.4byte gRam
_0810390C:
	.4byte 0x00001172
_08103910:
	.4byte gUnknown_0817BA30
_08103914:
	.4byte 0x00000F52
_08103918:
	add r0, r4, #0
	bl sub_08103CA0
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r7, r0, #24
	cmp r7, #0
	bne _08103972
	ldr r0, _0810397C  @ =0x00001122
	add r1, r6, r0
	add r1, r4, r1
	ldrb r0, [r1]
	mov r2, #6
	eor r0, r0, r2
	strb r0, [r1]
	ldr r0, _08103980  @ =0x00001052
	add r1, r6, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _08103984  @ =0x00000F52
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _08103958
	add r0, r4, #0
	bl sub_080C4F98
_08103958:
	add r0, r5, #0
	bl Sprite3_Move
	add r0, r5, #0
	bl sub_080C7A20
	lsl r0, r0, #24
	cmp r0, #0
	beq _08103972
	ldr r1, _08103988  @ =0x00000FA2
	add r0, r6, r1
	add r0, r5, r0
	strb r7, [r0]
_08103972:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810397C:
	.4byte 0x00001122
_08103980:
	.4byte 0x00001052
_08103984:
	.4byte 0x00000F52
_08103988:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_08103868

