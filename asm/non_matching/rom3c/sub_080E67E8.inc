	THUMB_FUNC_START sub_080E67E8
sub_080E67E8: @ 0x080E67E8
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r7, _080E6868  @ =gRam
	ldr r1, _080E686C  @ =0x00000F92
	add r0, r7, r1
	add r0, r6, r0
	ldrb r1, [r0]
	lsl r1, r1, #4
	ldr r0, _080E6870  @ =gUnknown_0817768C
	add r1, r1, r0
	add r0, r6, #0
	mov r2, #2
	bl sub_080C9480
	ldr r1, _080E6874  @ =0x000010D2
	add r0, r7, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080E6860
	ldr r0, _080E6878  @ =gUnknown_03003E74
	ldrh r4, [r0]
	lsl r4, r4, #3
	mov r1, #170
	lsl r1, r1, #3
	add r0, r7, r1
	add r4, r4, r0
	ldrh r5, [r4, #4]
	lsl r0, r5, #22
	lsr r0, r0, #22
	mov r2, #128
	lsl r2, r2, #1
	and r2, r2, r0
	ldr r1, _080E687C  @ =gUnknown_0817774C
	ldr r0, _080E6880  @ =0x00001082
	add r3, r7, r0
	add r3, r6, r3
	ldrb r0, [r3]
	add r0, r0, r1
	ldrb r1, [r0]
	orr r1, r1, r2
	ldr r0, _080E6884  @ =0xFFFFFC00
	and r0, r0, r5
	orr r0, r0, r1
	strh r0, [r4, #4]
	ldr r1, _080E6888  @ =gUnknown_08177750
	ldrb r0, [r3]
	add r0, r0, r1
	ldrb r1, [r0]
	lsr r1, r1, #6
	mov r0, #1
	and r1, r1, r0
	lsl r1, r1, #4
	ldrb r2, [r4, #3]
	mov r0, #17
	neg r0, r0
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r4, #3]
_080E6860:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E6868:
	.4byte gRam
_080E686C:
	.4byte 0x00000F92
_080E6870:
	.4byte gUnknown_0817768C
_080E6874:
	.4byte 0x000010D2
_080E6878:
	.4byte gUnknown_03003E74
_080E687C:
	.4byte gUnknown_0817774C
_080E6880:
	.4byte 0x00001082
_080E6884:
	.4byte 0xFFFFFC00
_080E6888:
	.4byte gUnknown_08177750
	THUMB_FUNC_END sub_080E67E8

