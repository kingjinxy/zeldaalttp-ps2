	THUMB_FUNC_START sub_08131FA4
sub_08131FA4: @ 0x08131FA4
	push {r4-r7,lr}
	mov r5, #0
	ldr r7, _081320B8  @ =gUnknown_02000800
	ldr r6, _081320BC  @ =gUnknown_02000C00
_08131FAC:
	add r4, r5, #0
	add r4, r4, #64
	asr r4, r4, #1
	lsl r4, r4, #1
	add r0, r4, r7
	ldrh r0, [r0]
	bl sub_08131F24
	add r4, r4, r6
	strh r0, [r4]
	add r4, r5, #0
	add r4, r4, #80
	asr r4, r4, #1
	lsl r4, r4, #1
	add r0, r4, r7
	ldrh r0, [r0]
	bl sub_08131F24
	add r4, r4, r6
	strh r0, [r4]
	add r4, r5, #0
	add r4, r4, #96
	asr r4, r4, #1
	lsl r4, r4, #1
	add r0, r4, r7
	ldrh r0, [r0]
	bl sub_08131F24
	add r4, r4, r6
	strh r0, [r4]
	add r4, r5, #0
	add r4, r4, #112
	asr r4, r4, #1
	lsl r4, r4, #1
	add r0, r4, r7
	ldrh r0, [r0]
	bl sub_08131F24
	add r4, r4, r6
	strh r0, [r4]
	add r4, r5, #0
	add r4, r4, #128
	asr r4, r4, #1
	lsl r4, r4, #1
	add r0, r4, r7
	ldrh r0, [r0]
	bl sub_08131F24
	add r4, r4, r6
	strh r0, [r4]
	add r4, r5, #0
	add r4, r4, #144
	asr r4, r4, #1
	lsl r4, r4, #1
	add r0, r4, r7
	ldrh r0, [r0]
	bl sub_08131F24
	add r4, r4, r6
	strh r0, [r4]
	add r4, r5, #0
	add r4, r4, #160
	asr r4, r4, #1
	lsl r4, r4, #1
	add r0, r4, r7
	ldrh r0, [r0]
	bl sub_08131F24
	add r4, r4, r6
	strh r0, [r4]
	add r4, r5, #0
	add r4, r4, #176
	asr r4, r4, #1
	lsl r4, r4, #1
	add r0, r4, r7
	ldrh r0, [r0]
	bl sub_08131F24
	add r4, r4, r6
	strh r0, [r4]
	add r4, r5, #0
	add r4, r4, #192
	asr r4, r4, #1
	lsl r4, r4, #1
	add r0, r4, r7
	ldrh r0, [r0]
	bl sub_08131F24
	add r4, r4, r6
	strh r0, [r4]
	add r4, r5, #0
	add r4, r4, #208
	asr r4, r4, #1
	lsl r4, r4, #1
	add r0, r4, r7
	ldrh r0, [r0]
	bl sub_08131F24
	add r4, r4, r6
	strh r0, [r4]
	add r4, r5, #0
	add r4, r4, #224
	asr r4, r4, #1
	lsl r4, r4, #1
	add r0, r4, r7
	ldrh r0, [r0]
	bl sub_08131F24
	add r4, r4, r6
	strh r0, [r4]
	add r4, r5, #0
	add r4, r4, #240
	asr r4, r4, #1
	lsl r4, r4, #1
	add r0, r4, r7
	ldrh r0, [r0]
	bl sub_08131F24
	add r4, r4, r6
	strh r0, [r4]
	add r0, r5, #2
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #16
	bne _08131FAC
	ldr r0, _081320B8  @ =gUnknown_02000800
	ldrh r1, [r0]
	cmp r1, #0
	beq _081320C4
	ldr r0, _081320BC  @ =gUnknown_02000C00
	ldr r1, _081320C0  @ =gUnknown_02000C80
	ldrh r1, [r1]
	b _081320C6
	.byte 0x00
	.byte 0x00
_081320B8:
	.4byte gUnknown_02000800
_081320BC:
	.4byte gUnknown_02000C00
_081320C0:
	.4byte gUnknown_02000C80
_081320C4:
	ldr r0, _081320D8  @ =gUnknown_02000C00
_081320C6:
	strh r1, [r0]
	ldr r0, _081320DC  @ =gRam
	ldr r1, _081320E0  @ =0x0000099B
	add r0, r0, r1
	mov r1, #1
	strb r1, [r0]
	pop {r4-r7}
	pop {r0}
	bx r0
_081320D8:
	.4byte gUnknown_02000C00
_081320DC:
	.4byte gRam
_081320E0:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_08131FA4

