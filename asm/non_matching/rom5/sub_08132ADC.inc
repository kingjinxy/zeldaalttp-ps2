	THUMB_FUNC_START sub_08132ADC
sub_08132ADC: @ 0x08132ADC
	push {r4-r6,lr}
	sub sp, sp, #4
	ldr r5, _08132B20  @ =gRam
	ldr r0, _08132B24  @ =0x000009E8
	add r6, r5, r0
	ldrh r4, [r6]
	cmp r4, #0
	bne _08132B40
	ldr r0, _08132B28  @ =gUnknown_02000800
	ldr r1, _08132B2C  @ =gUnknown_02010540
	mov r2, #128
	lsl r2, r2, #2
	bl CpuSet
	mov r1, sp
	ldr r2, _08132B30  @ =0x00007FFF
	add r0, r2, #0
	strh r0, [r1]
	mov r0, sp
	ldr r1, _08132B28  @ =gUnknown_02000800
	ldr r2, _08132B34  @ =0x01000200
	bl CpuSet
	ldr r1, _08132B38  @ =0x00000CF8
	add r0, r5, r1
	strh r4, [r0]
	ldr r2, _08132B3C  @ =0x00000CFA
	add r1, r5, r2
	mov r0, #2
	strh r0, [r1]
	ldrh r0, [r6]
	add r0, r0, #1
	strh r0, [r6]
	b _08132B44
_08132B20:
	.4byte gRam
_08132B24:
	.4byte 0x000009E8
_08132B28:
	.4byte gUnknown_02000800
_08132B2C:
	.4byte gUnknown_02010540
_08132B30:
	.4byte 0x00007FFF
_08132B34:
	.4byte 0x01000200
_08132B38:
	.4byte 0x00000CF8
_08132B3C:
	.4byte 0x00000CFA
_08132B40:
	bl sub_08132A48
_08132B44:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08132ADC

