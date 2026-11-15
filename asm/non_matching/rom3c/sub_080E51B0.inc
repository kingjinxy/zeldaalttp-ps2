	THUMB_FUNC_START sub_080E51B0
sub_080E51B0: @ 0x080E51B0
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	add r2, r5, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E528A
	ldr r2, _080E5298  @ =gRam
	ldr r1, _080E529C  @ =0x00000FB2
	add r0, r2, r1
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #1
	ldr r3, _080E52A0  @ =0x0000096C
	add r1, r2, r3
	strb r0, [r1]
	ldr r1, _080E52A4  @ =0x00000F62
	add r0, r2, r1
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #3
	add r3, r3, #1
	add r1, r2, r3
	strb r0, [r1]
	mov r1, #1
	add r7, r2, #0
	add r5, sp, #4
	mov r8, r5
	ldr r0, _080E52A8  @ =0x00000969
	add r0, r0, r7
	mov r9, r0
_080E5200:
	ldr r2, _080E52A0  @ =0x0000096C
	add r0, r7, r2
	ldrb r3, [r0]
	lsl r6, r1, #24
	asr r6, r6, #24
	add r3, r6, r3
	lsl r3, r3, #24
	lsr r3, r3, #24
	ldr r5, _080E52AC  @ =0x0000096D
	add r0, r7, r5
	ldrb r5, [r0]
	add r5, r3, r5
	lsl r5, r5, #24
	lsr r5, r5, #24
	ldr r0, _080E52B0  @ =gUnknown_03003E74
	mov r2, r8
	ldrb r1, [r2]
	ldrh r0, [r0]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r1, #150
	lsl r1, r1, #4
	add r2, r7, r1
	ldr r1, _080E52B4  @ =gUnknown_08177438
	lsl r3, r3, #1
	add r1, r3, r1
	ldrh r1, [r1]
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r2, _080E52B8  @ =0x00000964
	add r4, r7, r2
	ldr r2, _080E52BC  @ =gUnknown_08177448
	add r3, r3, r2
	ldrh r2, [r3]
	ldrh r4, [r4]
	add r2, r2, r4
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080E52C0  @ =gUnknown_08177458
	add r3, r5, r3
	ldrb r3, [r3]
	ldr r4, _080E52C4  @ =gUnknown_08177478
	add r5, r5, r4
	ldrb r4, [r5]
	mov r5, r9
	ldrb r5, [r5]
	lsl r5, r5, #24
	asr r5, r5, #24
	orr r4, r4, r5
	lsl r4, r4, #8
	add r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r4, #0
	str r4, [sp]
	bl sub_080C6368
	sub r6, r6, #1
	lsl r6, r6, #24
	mov r1, r8
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsr r1, r6, #24
	cmp r6, #0
	bge _080E5200
_080E528A:
	add sp, sp, #8
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_080E5298:
	.4byte gRam
_080E529C:
	.4byte 0x00000FB2
_080E52A0:
	.4byte 0x0000096C
_080E52A4:
	.4byte 0x00000F62
_080E52A8:
	.4byte 0x00000969
_080E52AC:
	.4byte 0x0000096D
_080E52B0:
	.4byte gUnknown_03003E74
_080E52B4:
	.4byte gUnknown_08177438
_080E52B8:
	.4byte 0x00000964
_080E52BC:
	.4byte gUnknown_08177448
_080E52C0:
	.4byte gUnknown_08177458
_080E52C4:
	.4byte gUnknown_08177478
	THUMB_FUNC_END sub_080E51B0

