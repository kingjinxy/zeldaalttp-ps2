	THUMB_FUNC_START sub_08119410
sub_08119410: @ 0x08119410
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r6, r0, #24
	add r0, r6, #0
	bl sub_080C177C
	ldr r1, _081194E0  @ =gRam
	mov r0, #150
	lsl r0, r0, #4
	add r5, r1, r0
	ldrh r2, [r5]
	ldr r3, _081194E4  @ =0x00000968
	add r0, r1, r3
	mov r3, #0
	strh r2, [r0]
	ldr r7, _081194E8  @ =0x00000964
	add r4, r1, r7
	ldrh r2, [r4]
	add r7, r7, #8
	add r0, r1, r7
	strh r2, [r0]
	ldr r0, _081194EC  @ =0x00000978
	add r2, r1, r0
	strb r3, [r2]
	ldr r3, _081194F0  @ =0x00000E29
	add r0, r1, r3
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #25
	lsr r6, r0, #24
	mov r10, r5
	mov r9, r4
	ldr r7, _081194F4  @ =gUnknown_03003E74
	mov r8, r2
_0811945E:
	ldr r0, _081194F8  @ =gUnknown_0817F35A
	add r3, r6, r0
	ldrb r0, [r3]
	cmp r0, #255
	beq _081194BA
	ldr r1, _081194FC  @ =gUnknown_0817F36E
	lsl r2, r6, #1
	add r1, r2, r1
	ldr r4, _081194E0  @ =gRam
	ldr r5, _081194E4  @ =0x00000968
	add r0, r4, r5
	ldrh r0, [r0]
	ldrh r1, [r1]
	add r0, r0, r1
	mov r1, r10
	strh r0, [r1]
	ldr r0, _08119500  @ =gUnknown_0817F382
	add r2, r2, r0
	add r5, r5, #4
	add r0, r4, r5
	ldrh r0, [r0]
	ldrh r2, [r2]
	add r0, r0, r2
	mov r1, r9
	strh r0, [r1]
	ldrh r0, [r7]
	ldrh r1, [r1]
	mov r4, r10
	ldrh r2, [r4]
	ldrb r3, [r3]
	ldr r4, _08119504  @ =gUnknown_0817F364
	add r4, r6, r4
	ldrb r5, [r4]
	mov r4, #36
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	ldr r4, _08119508  @ =gUnknown_0817F396
	add r4, r6, r4
	ldrb r4, [r4]
	str r4, [sp]
	bl sub_080C6368
	ldrh r0, [r7]
	add r0, r0, #1
	strh r0, [r7]
_081194BA:
	add r0, r6, #1
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r5, r8
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #2
	bne _0811945E
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_081194E0:
	.4byte gRam
_081194E4:
	.4byte 0x00000968
_081194E8:
	.4byte 0x00000964
_081194EC:
	.4byte 0x00000978
_081194F0:
	.4byte 0x00000E29
_081194F4:
	.4byte gUnknown_03003E74
_081194F8:
	.4byte gUnknown_0817F35A
_081194FC:
	.4byte gUnknown_0817F36E
_08119500:
	.4byte gUnknown_0817F382
_08119504:
	.4byte gUnknown_0817F364
_08119508:
	.4byte gUnknown_0817F396
	THUMB_FUNC_END sub_08119410

