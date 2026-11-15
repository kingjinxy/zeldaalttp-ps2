	THUMB_FUNC_START sub_08088AF8
sub_08088AF8: @ 0x08088AF8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	str r0, [sp]
	ldr r0, _08088C90  @ =gRam
	ldr r1, _08088C94  @ =0x000009F4
	add r2, r0, r1
	mov r1, #0
	strh r1, [r2]
_08088B10:
	mov r0, #0
	ldr r2, _08088C98  @ =gUnknown_03002C1A
	strh r0, [r2]
	ldr r4, _08088C9C  @ =gUnknown_03002C1E
	strh r0, [r4]
	ldr r1, _08088CA0  @ =gUnknown_03002C24
	ldrh r0, [r1]
	ldr r2, [sp]
	add r1, r2, r0
	ldrb r4, [r1]
	add r0, r4, #0
	cmp r0, #255
	bne _08088B32
	ldrb r0, [r1, #1]
	cmp r0, #255
	bne _08088B32
	b _08088CC8
_08088B32:
	mov r7, #0
	ldr r0, _08088CA4  @ =gUnknown_03002B90
	strb r4, [r0]
	ldr r1, _08088CA0  @ =gUnknown_03002C24
	ldrh r0, [r1]
	ldr r2, [sp]
	add r0, r2, r0
	ldrb r3, [r0, #1]
	ldr r0, _08088C90  @ =gRam
	ldr r1, _08088CA8  @ =0x00000961
	add r6, r0, r1
	strb r3, [r6]
	mov r2, #4
	neg r2, r2
	add r0, r2, #0
	add r2, r4, #0
	and r2, r2, r0
	ldr r0, _08088C90  @ =gRam
	add r1, r1, #15
	add r5, r0, r1
	mov r1, #3
	add r0, r1, #0
	and r0, r0, r4
	add r0, r0, #1
	ldr r4, _08088C98  @ =gUnknown_03002C1A
	strh r0, [r4]
	and r1, r1, r3
	add r1, r1, #1
	ldr r0, _08088C9C  @ =gUnknown_03002C1E
	strh r1, [r0]
	lsl r2, r2, #24
	lsr r2, r2, #25
	strb r2, [r5]
	mov r0, #4
	and r0, r0, r3
	cmp r0, #0
	beq _08088B86
	mov r1, #128
	neg r1, r1
	add r0, r1, #0
	orr r2, r2, r0
	strb r2, [r5]
_08088B86:
	ldrb r0, [r6]
	lsr r0, r0, #3
	ldr r2, _08088CAC  @ =gUnknown_03002BA1
	strb r0, [r2]
	ldr r4, _08088CA0  @ =gUnknown_03002C24
	ldrh r0, [r4]
	add r0, r0, #3
	strh r0, [r4]
	ldr r6, _08088CB0  @ =gUnknown_08164630
	mov r0, #0
	ldrsh r4, [r5, r0]
	ldr r1, _08088C90  @ =gRam
	mov r9, r1
	ldr r2, _08088CB4  @ =0x00000974
	add r2, r2, r9
	mov r8, r2
	ldr r7, _08088CB8  @ =0x00000968
	add r7, r7, r9
	ldr r5, _08088CBC  @ =gUnknown_0201A000
	ldr r0, _08088CC0  @ =0x000009EE
	add r0, r0, r9
	mov r10, r0
_08088BB2:
	ldr r1, _08088C98  @ =gUnknown_03002C1A
	ldrh r0, [r1]
	mov r2, r8
	strh r0, [r2]
_08088BBA:
	mov r0, #2
	strh r0, [r7]
_08088BBE:
	add r0, r4, #0
	bl sub_08080380
	asr r0, r0, #1
	lsl r1, r0, #1
	add r1, r1, r5
	ldrh r0, [r6]
	strh r0, [r1]
	add r0, r4, #2
	bl sub_08080380
	asr r0, r0, #1
	lsl r1, r0, #1
	add r1, r1, r5
	ldrh r0, [r6, #2]
	strh r0, [r1]
	add r0, r4, #4
	bl sub_08080380
	asr r0, r0, #1
	lsl r1, r0, #1
	add r1, r1, r5
	ldrh r0, [r6, #4]
	strh r0, [r1]
	add r0, r4, #6
	bl sub_08080380
	asr r0, r0, #1
	lsl r1, r0, #1
	add r1, r1, r5
	ldrh r0, [r6, #6]
	strh r0, [r1]
	add r0, r4, #0
	add r0, r0, #128
	bl sub_08080380
	asr r0, r0, #1
	lsl r1, r0, #1
	add r1, r1, r5
	ldrh r0, [r6, #8]
	strh r0, [r1]
	add r0, r4, #0
	add r0, r0, #130
	bl sub_08080380
	asr r0, r0, #1
	lsl r1, r0, #1
	add r1, r1, r5
	ldrh r0, [r6, #10]
	strh r0, [r1]
	add r0, r4, #0
	add r0, r0, #132
	bl sub_08080380
	asr r0, r0, #1
	lsl r1, r0, #1
	add r1, r1, r5
	ldrh r0, [r6, #12]
	strh r0, [r1]
	add r0, r4, #0
	add r0, r0, #134
	bl sub_08080380
	asr r0, r0, #1
	lsl r1, r0, #1
	add r1, r1, r5
	ldrh r0, [r6, #14]
	strh r0, [r1]
	mov r0, #128
	lsl r0, r0, #1
	add r4, r4, r0
	ldrh r0, [r7]
	sub r0, r0, #1
	strh r0, [r7]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08088BBE
	ldr r1, _08088CC4  @ =0xFFFFFE08
	add r4, r4, r1
	mov r2, r8
	ldrh r0, [r2]
	sub r0, r0, #1
	strh r0, [r2]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08088BBA
	mov r1, #151
	lsl r1, r1, #4
	add r1, r1, r9
	mov r4, #128
	lsl r4, r4, #2
	add r0, r4, #0
	ldrh r2, [r1]
	add r0, r0, r2
	strh r0, [r1]
	mov r0, #0
	ldrsh r4, [r1, r0]
	mov r1, r10
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08088BB2
	b _08088B10
_08088C90:
	.4byte gRam
_08088C94:
	.4byte 0x000009F4
_08088C98:
	.4byte gUnknown_03002C1A
_08088C9C:
	.4byte gUnknown_03002C1E
_08088CA0:
	.4byte gUnknown_03002C24
_08088CA4:
	.4byte gUnknown_03002B90
_08088CA8:
	.4byte 0x00000961
_08088CAC:
	.4byte gUnknown_03002BA1
_08088CB0:
	.4byte gUnknown_08164630
_08088CB4:
	.4byte 0x00000974
_08088CB8:
	.4byte 0x00000968
_08088CBC:
	.4byte gUnknown_0201A000
_08088CC0:
	.4byte 0x000009EE
_08088CC4:
	.4byte 0xFFFFFE08
_08088CC8:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08088AF8

