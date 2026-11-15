	THUMB_FUNC_START sub_080CE3E4
sub_080CE3E4: @ 0x080CE3E4
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r5, _080CE43C  @ =gRam
	ldr r2, _080CE440  @ =0x0000131C
	add r1, r5, r2
	add r1, r0, r1
	ldrb r6, [r1]
	bl sub_080CD8BC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080CE432
	ldr r0, _080CE444  @ =gUnknown_03003E74
	ldrh r0, [r0]
	mov r3, #150
	lsl r3, r3, #4
	add r1, r5, r3
	ldrh r1, [r1]
	ldr r7, _080CE448  @ =0x00000964
	add r2, r5, r7
	ldrh r2, [r2]
	ldr r3, _080CE44C  @ =0x00001122
	add r4, r5, r3
	add r4, r6, r4
	ldr r7, _080CE450  @ =0x00000D94
	add r3, r5, r7
	add r3, r6, r3
	ldrb r4, [r4]
	ldrb r3, [r3]
	orr r3, r3, r4
	lsl r3, r3, #8
	mov r4, #72
	orr r3, r3, r4
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
_080CE432:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CE43C:
	.4byte gRam
_080CE440:
	.4byte 0x0000131C
_080CE444:
	.4byte gUnknown_03003E74
_080CE448:
	.4byte 0x00000964
_080CE44C:
	.4byte 0x00001122
_080CE450:
	.4byte 0x00000D94
	THUMB_FUNC_END sub_080CE3E4

