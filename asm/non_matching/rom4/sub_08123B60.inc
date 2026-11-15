	THUMB_FUNC_START sub_08123B60
sub_08123B60: @ 0x08123B60
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, sp, #4
	ldr r5, _08123CA0  @ =gRam
	ldr r1, _08123CA4  @ =0x00000E15
	add r0, r5, r1
	mov r1, #0
	mov r2, #51
	strb r2, [r0]
	ldr r3, _08123CA8  @ =0x00000E16
	add r0, r5, r3
	strb r2, [r0]
	ldr r4, _08123CAC  @ =0x00000E17
	add r0, r5, r4
	strb r1, [r0]
	ldr r2, _08123CB0  @ =0x00000E18
	add r0, r5, r2
	strb r1, [r0]
	add r3, r3, #3
	add r0, r5, r3
	strb r1, [r0]
	add r4, r4, #3
	add r0, r5, r4
	strb r1, [r0]
	add r2, r2, #17
	add r0, r5, r2
	strb r1, [r0]
	ldr r3, _08123CB4  @ =0x0000177A
	add r0, r5, r3
	strb r1, [r0]
	ldr r4, _08123CB8  @ =0x00001791
	add r0, r5, r4
	strb r1, [r0]
	ldr r2, _08123CBC  @ =0x00001813
	add r0, r5, r2
	strb r1, [r0]
	mov r3, #161
	lsl r3, r3, #4
	add r0, r5, r3
	ldrb r2, [r0]
	ldr r4, _08123CC0  @ =0x00000E47
	add r0, r5, r4
	strb r2, [r0]
	ldr r3, _08123CC4  @ =0x00000E48
	add r0, r5, r3
	strb r2, [r0]
	ldr r4, _08123CC8  @ =0x00000B1E
	add r0, r5, r4
	ldrh r2, [r0]
	mov r3, #195
	lsl r3, r3, #5
	add r0, r5, r3
	strb r2, [r0]
	ldr r0, _08123CCC  @ =gUnknown_02003090
	strb r1, [r0]
	sub r0, r0, #7
	strb r1, [r0]
	sub r0, r0, #8
	strb r1, [r0]
	add r0, r0, #16
	strb r1, [r0]
	ldr r1, _08123CD0  @ =gUnknown_02003080
	mov r0, #1
	strb r0, [r1]
	sub r4, r4, #254
	add r1, r5, r4
	mov r0, #1
	strh r0, [r1]
	ldr r1, _08123CD4  @ =gUnknown_02003088
	mov r0, #3
	strb r0, [r1]
	ldr r0, _08123CD8  @ =gUnknown_0200309C
	ldrb r0, [r0]
	lsl r0, r0, #24
	lsr r3, r0, #24
	lsr r4, r0, #25
	ldr r2, _08123CDC  @ =gUnknown_02003098
	ldr r0, _08123CE0  @ =gUnknown_0818047C
	lsl r1, r4, #1
	add r0, r1, r0
	ldrh r0, [r0]
	ldrh r4, [r2]
	add r0, r0, r4
	strh r0, [r2]
	add r2, r2, #2
	ldr r0, _08123CE4  @ =gUnknown_08180484
	add r1, r1, r0
	ldrh r0, [r1]
	ldrh r1, [r2]
	add r0, r0, r1
	strh r0, [r2]
	mov r4, #0
	cmp r3, #3
	bhi _08123C22
	mov r4, #16
_08123C22:
	mov r7, #6
	ldr r2, _08123CE8  @ =gUnknown_0818045C
	mov r8, r2
	add r6, r5, #0
	ldr r3, _08123CEC  @ =0x00000506
	add r3, r3, r6
	mov r9, r3
	ldr r5, _08123CF0  @ =gUnknown_020030A6
	ldr r0, _08123CF4  @ =0x00000504
	add r3, r6, r0
_08123C36:
	asr r1, r4, #1
	lsl r2, r1, #1
	add r2, r2, r8
	ldr r0, _08123CDC  @ =gUnknown_02003098
	ldrh r0, [r0]
	ldrh r2, [r2]
	add r0, r0, r2
	strh r0, [r5]
	add r1, r1, #1
	lsl r1, r1, #1
	add r1, r1, r8
	ldr r0, _08123CF8  @ =gUnknown_0200309A
	ldrh r2, [r0]
	ldrh r1, [r1]
	add r2, r2, r1
	strh r2, [r5, #16]
	ldr r1, _08123CFC  @ =0x00000952
	add r0, r6, r1
	ldrh r0, [r0]
	sub r2, r2, r0
	add r1, r1, #14
	add r0, r6, r1
	strh r2, [r0]
	add r1, r1, #1
	add r0, r6, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _08123C86
	strh r2, [r3]
	mov r0, #128
	mov r2, r9
	strh r0, [r2]
	mov r0, #41
	add r1, r3, #0
	str r3, [sp]
	bl sub_0812A324
	ldr r3, [sp]
_08123C86:
	add r4, r4, #4
	sub r5, r5, #2
	sub r7, r7, #2
	cmp r7, #0
	bge _08123C36
	add sp, sp, #4
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08123CA0:
	.4byte gRam
_08123CA4:
	.4byte 0x00000E15
_08123CA8:
	.4byte 0x00000E16
_08123CAC:
	.4byte 0x00000E17
_08123CB0:
	.4byte 0x00000E18
_08123CB4:
	.4byte 0x0000177A
_08123CB8:
	.4byte 0x00001791
_08123CBC:
	.4byte 0x00001813
_08123CC0:
	.4byte 0x00000E47
_08123CC4:
	.4byte 0x00000E48
_08123CC8:
	.4byte 0x00000B1E
_08123CCC:
	.4byte gUnknown_02003090
_08123CD0:
	.4byte gUnknown_02003080
_08123CD4:
	.4byte gUnknown_02003088
_08123CD8:
	.4byte gUnknown_0200309C
_08123CDC:
	.4byte gUnknown_02003098
_08123CE0:
	.4byte gUnknown_0818047C
_08123CE4:
	.4byte gUnknown_08180484
_08123CE8:
	.4byte gUnknown_0818045C
_08123CEC:
	.4byte 0x00000506
_08123CF0:
	.4byte gUnknown_020030A6
_08123CF4:
	.4byte 0x00000504
_08123CF8:
	.4byte gUnknown_0200309A
_08123CFC:
	.4byte 0x00000952
	THUMB_FUNC_END sub_08123B60

