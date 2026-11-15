	THUMB_FUNC_START sub_08117AE8
sub_08117AE8: @ 0x08117AE8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r0, _08117CB8  @ =gUnknown_02003090
	ldrb r0, [r0]
	ldr r3, _08117CBC  @ =gRam
	cmp r0, #0
	beq _08117B2A
	ldr r2, _08117CC0  @ =0x00000E29
	add r0, r3, r2
	add r2, r1, r0
	ldrb r0, [r2]
	cmp r0, #4
	beq _08117B2A
	ldr r4, _08117CC4  @ =0x00001844
	add r0, r3, r4
	add r1, r1, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _08117B2A
	mov r0, #5
	strb r0, [r1]
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
_08117B2A:
	mov r7, #3
	ldr r6, _08117CBC  @ =gRam
	mov r10, r6
_08117B30:
	ldr r0, _08117CC8  @ =gUnknown_02003088
	add r1, r7, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _08117BB0
	mov r0, #5
	strb r0, [r1]
	ldr r2, _08117CCC  @ =gUnknown_02003080
	add r1, r7, r2
	ldrb r0, [r1]
	cmp r0, #128
	beq _08117BB0
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #0
	beq _08117B62
	cmp r0, #4
	bne _08117BB0
	mov r0, #0
	strb r0, [r1]
_08117B62:
	ldr r1, _08117CD0  @ =gUnknown_02003098
	ldrh r0, [r1]
	sub r0, r0, #8
	strh r0, [r1]
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #199
	bhi _08117B8C
	ldr r0, _08117CD4  @ =0x00000952
	add r0, r0, r10
	ldrh r1, [r0]
	mov r0, #152
	sub r0, r0, r1
	ldr r3, _08117CD8  @ =gUnknown_03002B90
	strh r0, [r3]
	ldr r1, _08117CB8  @ =gUnknown_02003090
	ldrb r0, [r1]
	cmp r0, #1
	beq _08117B8C
	mov r0, #1
	strb r0, [r1]
_08117B8C:
	ldr r3, _08117CD0  @ =gUnknown_02003098
	ldrh r0, [r3]
	cmp r0, #167
	bhi _08117B9C
	ldr r4, _08117CCC  @ =gUnknown_02003080
	add r1, r7, r4
	mov r0, #128
	strb r0, [r1]
_08117B9C:
	lsl r1, r7, #1
	ldr r6, _08117CDC  @ =gUnknown_020030B0
	add r2, r1, r6
	ldr r0, _08117CE0  @ =gUnknown_0200309A
	ldrh r0, [r0]
	strh r0, [r2]
	ldr r0, _08117CE4  @ =gUnknown_020030A0
	add r1, r1, r0
	ldrh r0, [r3]
	strh r0, [r1]
_08117BB0:
	ldr r2, _08117CCC  @ =gUnknown_02003080
	add r1, r7, r2
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	blt _08117C82
	ldrb r1, [r1]
	ldr r0, _08117CE8  @ =gUnknown_0817EFEF
	add r0, r1, r0
	ldrb r3, [r0]
	ldr r0, _08117CEC  @ =gUnknown_0817EFF3
	add r0, r1, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r3, r3, r0
	ldr r4, _08117CF0  @ =gUnknown_03002B98
	strh r3, [r4]
	ldr r0, _08117CF4  @ =gUnknown_0817EFF7
	add r0, r1, r0
	ldrb r0, [r0]
	ldr r6, _08117CF8  @ =gUnknown_03002B9C
	strb r0, [r6]
	ldr r0, _08117CFC  @ =gUnknown_0817EFFB
	add r1, r1, r0
	ldrb r0, [r1]
	ldr r1, _08117D00  @ =0x0000096D
	add r1, r1, r10
	mov r9, r1
	strb r0, [r1]
	lsl r2, r7, #1
	ldr r4, _08117CE4  @ =gUnknown_020030A0
	add r0, r2, r4
	ldr r1, _08117D04  @ =0x00000958
	add r1, r1, r10
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	add r3, r3, r0
	mov r6, #150
	lsl r6, r6, #4
	add r6, r6, r10
	mov r8, r6
	strh r3, [r6]
	ldr r0, _08117CDC  @ =gUnknown_020030B0
	add r2, r2, r0
	ldr r0, _08117CD4  @ =0x00000952
	add r0, r0, r10
	ldrh r1, [r2]
	ldrh r0, [r0]
	sub r1, r1, r0
	ldr r6, _08117D08  @ =0x00000964
	add r6, r6, r10
	strh r1, [r6]
	add r1, r1, #8
	ldr r2, _08117D0C  @ =gUnknown_03002BA0
	strh r1, [r2]
	ldr r5, _08117D10  @ =gUnknown_03003E74
	ldrh r0, [r5]
	ldrh r1, [r6]
	mov r3, r8
	ldrh r2, [r3]
	ldr r4, _08117CF8  @ =gUnknown_03002B9C
	mov r3, #0
	ldrsb r3, [r4, r3]
	mov r4, #200
	lsl r4, r4, #6
	orr r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r4, r9
	ldrb r4, [r4]
	str r4, [sp]
	bl sub_080C6368
	ldrh r0, [r5]
	add r0, r0, #1
	strh r0, [r5]
	mov r1, r9
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #2
	beq _08117C82
	ldr r2, _08117D0C  @ =gUnknown_03002BA0
	ldrh r0, [r2]
	strh r0, [r6]
	ldrh r0, [r5]
	ldrh r1, [r6]
	mov r3, r8
	ldrh r2, [r3]
	ldr r4, _08117CF8  @ =gUnknown_03002B9C
	mov r3, #0
	ldrsb r3, [r4, r3]
	mov r6, #200
	lsl r6, r6, #6
	orr r3, r3, r6
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r6, r9
	ldrb r4, [r6]
	str r4, [sp]
	bl sub_080C6368
	ldrh r0, [r5]
	add r0, r0, #1
	strh r0, [r5]
_08117C82:
	sub r0, r7, #1
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r3, _08117CBC  @ =gRam
	cmp r0, #0
	blt _08117C90
	b _08117B30
_08117C90:
	mov r7, #3
	ldr r1, _08117CCC  @ =gUnknown_02003080
_08117C94:
	add r0, r7, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _08117D18
	sub r0, r7, #1
	lsl r0, r0, #24
	lsr r7, r0, #24
	cmp r0, #0
	bge _08117C94
	ldr r1, _08117D14  @ =0x00000E15
	add r0, r3, r1
	add r0, r7, r0
	mov r1, #0
	strb r1, [r0]
	b _08117DC2
	.byte 0x00
	.byte 0x00
_08117CB8:
	.4byte gUnknown_02003090
_08117CBC:
	.4byte gRam
_08117CC0:
	.4byte 0x00000E29
_08117CC4:
	.4byte 0x00001844
_08117CC8:
	.4byte gUnknown_02003088
_08117CCC:
	.4byte gUnknown_02003080
_08117CD0:
	.4byte gUnknown_02003098
_08117CD4:
	.4byte 0x00000952
_08117CD8:
	.4byte gUnknown_03002B90
_08117CDC:
	.4byte gUnknown_020030B0
_08117CE0:
	.4byte gUnknown_0200309A
_08117CE4:
	.4byte gUnknown_020030A0
_08117CE8:
	.4byte gUnknown_0817EFEF
_08117CEC:
	.4byte gUnknown_0817EFF3
_08117CF0:
	.4byte gUnknown_03002B98
_08117CF4:
	.4byte gUnknown_0817EFF7
_08117CF8:
	.4byte gUnknown_03002B9C
_08117CFC:
	.4byte gUnknown_0817EFFB
_08117D00:
	.4byte 0x0000096D
_08117D04:
	.4byte 0x00000958
_08117D08:
	.4byte 0x00000964
_08117D0C:
	.4byte gUnknown_03002BA0
_08117D10:
	.4byte gUnknown_03003E74
_08117D14:
	.4byte 0x00000E15
_08117D18:
	ldr r2, _08117DD4  @ =0x000015DD
	add r0, r3, r2
	ldrb r7, [r0]
	ldr r0, _08117DD8  @ =gUnknown_02003090
	ldrb r0, [r0]
	cmp r0, #0
	beq _08117DC2
	ldr r4, _08117DDC  @ =0x00000E29
	add r0, r3, r4
	add r2, r7, r0
	ldrb r0, [r2]
	cmp r0, #4
	beq _08117DC2
	ldr r1, _08117DE0  @ =gUnknown_0817F0A8
	add r0, r0, r1
	ldrb r7, [r0]
	mov r6, #151
	lsl r6, r6, #4
	add r1, r3, r6
	mov r0, #0
	strb r0, [r1]
	mov r8, r3
	ldr r0, _08117DE4  @ =0x00000964
	add r0, r0, r8
	mov r10, r0
	ldr r6, _08117DE8  @ =gUnknown_03003E74
	mov r9, r1
_08117D4E:
	ldr r0, _08117DEC  @ =gUnknown_0817EFFF
	add r3, r7, r0
	ldrb r0, [r3]
	cmp r0, #255
	beq _08117DAC
	ldr r0, _08117DF0  @ =gUnknown_0817F048
	lsl r2, r7, #1
	add r0, r2, r0
	ldrh r1, [r0]
	add r1, r1, #200
	ldr r0, _08117DF4  @ =0x00000958
	add r0, r0, r8
	ldrh r0, [r0]
	sub r1, r1, r0
	ldr r4, _08117DF8  @ =gUnknown_03002B90
	strh r1, [r4]
	ldr r0, _08117DFC  @ =gUnknown_0817F078
	add r2, r2, r0
	ldrh r1, [r2]
	add r1, r1, #168
	ldr r0, _08117E00  @ =0x00000952
	add r0, r0, r8
	ldrh r0, [r0]
	sub r1, r1, r0
	mov r0, r10
	strh r1, [r0]
	ldrh r0, [r6]
	mov r2, r10
	ldrh r1, [r2]
	ldrh r2, [r4]
	ldrb r3, [r3]
	ldr r4, _08117E04  @ =gUnknown_0817F017
	add r4, r7, r4
	ldrb r5, [r4]
	mov r4, #50
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	ldr r4, _08117E08  @ =gUnknown_0817F02F
	add r4, r7, r4
	ldrb r4, [r4]
	str r4, [sp]
	bl sub_080C6368
	ldrh r0, [r6]
	add r0, r0, #1
	strh r0, [r6]
_08117DAC:
	add r0, r7, #1
	lsl r0, r0, #24
	lsr r7, r0, #24
	mov r3, r9
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #6
	bne _08117D4E
_08117DC2:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08117DD4:
	.4byte 0x000015DD
_08117DD8:
	.4byte gUnknown_02003090
_08117DDC:
	.4byte 0x00000E29
_08117DE0:
	.4byte gUnknown_0817F0A8
_08117DE4:
	.4byte 0x00000964
_08117DE8:
	.4byte gUnknown_03003E74
_08117DEC:
	.4byte gUnknown_0817EFFF
_08117DF0:
	.4byte gUnknown_0817F048
_08117DF4:
	.4byte 0x00000958
_08117DF8:
	.4byte gUnknown_03002B90
_08117DFC:
	.4byte gUnknown_0817F078
_08117E00:
	.4byte 0x00000952
_08117E04:
	.4byte gUnknown_0817F017
_08117E08:
	.4byte gUnknown_0817F02F
	THUMB_FUNC_END sub_08117AE8

