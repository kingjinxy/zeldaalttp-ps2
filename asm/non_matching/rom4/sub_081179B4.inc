	THUMB_FUNC_START sub_081179B4
sub_081179B4: @ 0x081179B4
	push {r4,lr}
	ldr r4, _08117A98  @ =gRam
	ldr r1, _08117A9C  @ =0x000009B2
	add r0, r4, r1
	mov r3, #0
	ldrsb r3, [r0, r3]
	cmp r3, #0
	bne _08117A90
	ldr r2, _08117AA0  @ =0x000009C6
	add r0, r4, r2
	ldrh r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	beq _08117A90
	ldr r0, _08117AA4  @ =0x00000E15
	add r1, r4, r0
	mov r0, #52
	strb r0, [r1]
	ldr r1, _08117AA8  @ =0x00000E16
	add r0, r4, r1
	strb r3, [r0]
	ldr r2, _08117AAC  @ =0x00000E17
	add r0, r4, r2
	strb r3, [r0]
	add r1, r1, #2
	add r0, r4, r1
	strb r3, [r0]
	add r2, r2, #2
	add r0, r4, r2
	strb r3, [r0]
	add r1, r1, #2
	add r0, r4, r1
	strb r3, [r0]
	ldr r2, _08117AB0  @ =0x000017F0
	add r0, r4, r2
	strb r3, [r0]
	ldr r0, _08117AB4  @ =gUnknown_08226484
	add r0, r0, #51
	ldrb r1, [r0]
	ldr r2, _08117AB8  @ =0x00000E5B
	add r0, r4, r2
	strb r1, [r0]
	ldr r1, _08117ABC  @ =gUnknown_02003080
	mov r0, #253
	strb r0, [r1]
	add r1, r1, #1
	mov r0, #254
	strb r0, [r1]
	add r1, r1, #1
	mov r0, #255
	strb r0, [r1]
	ldr r0, _08117AC0  @ =gUnknown_02003083
	strb r3, [r0]
	add r0, r0, #13
	strb r3, [r0]
	sub r0, r0, #8
	mov r1, #5
	strb r1, [r0]
	add r0, r0, #1
	strb r1, [r0]
	add r0, r0, #1
	strb r1, [r0]
	add r0, r0, #1
	strb r1, [r0]
	ldr r1, _08117AC4  @ =0x00001844
	add r0, r4, r1
	strb r3, [r0]
	ldr r0, _08117AC8  @ =gUnknown_02003098
	mov r2, #128
	lsl r2, r2, #1
	add r1, r2, #0
	strh r1, [r0]
	add r0, r0, #14
	strh r1, [r0]
	sub r0, r0, #12
	mov r1, #152
	strh r1, [r0]
	add r0, r0, #28
	strh r1, [r0]
	ldr r0, _08117ACC  @ =0x00000B6E
	add r1, r4, r0
	mov r0, #2
	strb r0, [r1]
	ldr r1, _08117AD0  @ =0x000009E8
	add r0, r4, r1
	mov r2, #0
	strh r3, [r0]
	ldr r3, _08117AD4  @ =0x00000A02
	add r0, r4, r3
	strb r2, [r0]
	add r1, r1, #40
	add r0, r4, r1
	ldrb r1, [r0]
	ldr r3, _08117AD8  @ =0x00000E47
	add r0, r4, r3
	strb r1, [r0]
	ldr r1, _08117ADC  @ =0x00000B1E
	add r0, r4, r1
	ldrh r1, [r0]
	mov r3, #195
	lsl r3, r3, #5
	add r0, r4, r3
	strb r1, [r0]
	ldr r1, _08117AE0  @ =0x00000E29
	add r0, r4, r1
	strb r2, [r0]
	ldr r3, _08117AE4  @ =0x00000E1F
	add r0, r4, r3
	strb r2, [r0]
_08117A90:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08117A98:
	.4byte gRam
_08117A9C:
	.4byte 0x000009B2
_08117AA0:
	.4byte 0x000009C6
_08117AA4:
	.4byte 0x00000E15
_08117AA8:
	.4byte 0x00000E16
_08117AAC:
	.4byte 0x00000E17
_08117AB0:
	.4byte 0x000017F0
_08117AB4:
	.4byte gUnknown_08226484
_08117AB8:
	.4byte 0x00000E5B
_08117ABC:
	.4byte gUnknown_02003080
_08117AC0:
	.4byte gUnknown_02003083
_08117AC4:
	.4byte 0x00001844
_08117AC8:
	.4byte gUnknown_02003098
_08117ACC:
	.4byte 0x00000B6E
_08117AD0:
	.4byte 0x000009E8
_08117AD4:
	.4byte 0x00000A02
_08117AD8:
	.4byte 0x00000E47
_08117ADC:
	.4byte 0x00000B1E
_08117AE0:
	.4byte 0x00000E29
_08117AE4:
	.4byte 0x00000E1F
	THUMB_FUNC_END sub_081179B4

