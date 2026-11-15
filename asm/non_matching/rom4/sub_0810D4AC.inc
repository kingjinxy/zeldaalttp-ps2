	THUMB_FUNC_START sub_0810D4AC
sub_0810D4AC: @ 0x0810D4AC
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	add r2, r4, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #0
	bne _0810D56A
	add r0, r4, #0
	bl sub_080C6340
	ldr r1, _0810D518  @ =gRam
	ldr r3, _0810D51C  @ =gUnknown_0817CEAA
	ldr r2, _0810D520  @ =gUnknown_0817CEB1
	ldr r6, _0810D524  @ =0x00000F92
	add r0, r1, r6
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, r2
	ldrb r0, [r0]
	add r0, r0, r3
	ldrb r0, [r0]
	ldr r3, _0810D528  @ =0x0000096C
	add r2, r1, r3
	strb r0, [r2]
	ldr r6, _0810D52C  @ =0x0000096D
	add r0, r1, r6
	strb r5, [r0]
	mov r4, #1
	add r6, r1, #0
	mov r8, r2
	ldr r0, _0810D530  @ =0x00000969
	add r7, r6, r0
_0810D4FE:
	ldr r1, _0810D534  @ =0x00000964
	add r0, r6, r1
	mov r2, #0
	ldrsh r1, [r0, r2]
	cmp r4, #0
	bne _0810D538
	mov r3, r8
	mov r2, #0
	ldrsh r0, [r3, r2]
	sub r0, r1, r0
	lsl r0, r0, #16
	b _0810D53A
	.byte 0x00
	.byte 0x00
_0810D518:
	.4byte gRam
_0810D51C:
	.4byte gUnknown_0817CEAA
_0810D520:
	.4byte gUnknown_0817CEB1
_0810D524:
	.4byte 0x00000F92
_0810D528:
	.4byte 0x0000096C
_0810D52C:
	.4byte 0x0000096D
_0810D530:
	.4byte 0x00000969
_0810D534:
	.4byte 0x00000964
_0810D538:
	lsl r0, r1, #16
_0810D53A:
	lsr r2, r0, #16
	ldr r0, _0810D578  @ =gUnknown_03003E74
	sub r5, r4, #1
	ldrh r0, [r0]
	sub r0, r0, r5
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r3, #150
	lsl r3, r3, #4
	add r1, r6, r3
	ldrh r1, [r1]
	ldr r3, _0810D57C  @ =gUnknown_0817CEBD
	add r3, r4, r3
	ldrb r3, [r3]
	ldrb r4, [r7]
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
	add r4, r5, #0
	cmp r4, #0
	bge _0810D4FE
_0810D56A:
	add sp, sp, #8
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810D578:
	.4byte gUnknown_03003E74
_0810D57C:
	.4byte gUnknown_0817CEBD
	THUMB_FUNC_END sub_0810D4AC

