	THUMB_FUNC_START sub_08029954
sub_08029954: @ 0x08029954
	push {r4-r6,lr}
	add r6, r0, #0
	ldr r1, _080299E4  @ =gUnknown_0201F000
	add r0, r0, #82
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldr r1, [r6, #96]
	and r0, r0, r1
	cmp r0, r1
	bne _080299DC
	mov r0, #50
	ldrsh r4, [r6, r0]
	ldr r1, _080299E8  @ =gUnknown_03000450
	ldrh r0, [r1, #24]
	add r0, r0, #8
	sub r4, r4, r0
	asr r4, r4, #4
	mov r2, #54
	ldrsh r0, [r6, r2]
	ldrh r1, [r1, #26]
	add r1, r1, #8
	sub r0, r0, r1
	asr r0, r0, #4
	lsl r0, r0, #6
	orr r4, r4, r0
	lsl r4, r4, #16
	lsr r4, r4, #16
	mov r0, #167
	lsl r0, r0, #1
	add r5, r6, #0
	add r5, r5, #80
	ldrh r2, [r5]
	add r1, r4, #0
	bl sub_08014658
	ldr r0, _080299EC  @ =0x0000014F
	add r1, r4, #1
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	bl sub_08014658
	mov r0, #168
	lsl r0, r0, #1
	add r1, r4, #0
	add r1, r1, #64
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	bl sub_08014658
	ldr r0, _080299F0  @ =0x00000151
	add r4, r4, #65
	lsl r4, r4, #16
	lsr r4, r4, #16
	ldrh r2, [r5]
	add r1, r4, #0
	bl sub_08014658
	add r0, r6, #0
	mov r1, #23
	bl 0x08003E10
	add r0, r6, #0
	bl DeleteThisEntity
_080299DC:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080299E4:
	.4byte gUnknown_0201F000
_080299E8:
	.4byte gUnknown_03000450
_080299EC:
	.4byte 0x0000014F
_080299F0:
	.4byte 0x00000151
	THUMB_FUNC_END sub_08029954

