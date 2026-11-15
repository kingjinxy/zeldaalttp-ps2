	THUMB_FUNC_START sub_0811EE68
sub_0811EE68: @ 0x0811EE68
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r2, _0811EE94  @ =gRam
	ldr r0, _0811EE98  @ =0x000015F9
	add r1, r2, r0
	mov r0, #3
	strb r0, [r1]
	ldr r1, _0811EE9C  @ =0x00000A92
	add r0, r2, r1
	add r0, r3, r0
	ldrb r1, [r0]
	add r0, r1, #0
	cmp r0, #255
	bne _0811EEA4
	ldr r4, _0811EEA0  @ =0x00000969
	add r1, r2, r4
	mov r0, #0
	strb r0, [r1]
	b _0811EEAA
_0811EE94:
	.4byte gRam
_0811EE98:
	.4byte 0x000015F9
_0811EE9C:
	.4byte 0x00000A92
_0811EEA0:
	.4byte 0x00000969
_0811EEA4:
	ldr r4, _0811EFF8  @ =0x00000969
	add r0, r2, r4
	strb r1, [r0]
_0811EEAA:
	ldr r1, _0811EFFC  @ =gRam
	ldr r2, _0811F000  @ =0x00000DCF
	add r0, r1, r2
	add r0, r3, r0
	ldrb r2, [r0]
	mov r4, #150
	lsl r4, r4, #4
	add r0, r1, r4
	strb r2, [r0]
	ldr r2, _0811F004  @ =0x00000DE3
	add r0, r1, r2
	add r0, r3, r0
	ldrb r2, [r0]
	add r4, r4, #1
	add r0, r1, r4
	strb r2, [r0]
	ldr r2, _0811F008  @ =0x00000DC5
	add r0, r1, r2
	add r0, r3, r0
	ldrb r2, [r0]
	ldr r4, _0811F00C  @ =0x00000DD9
	add r0, r1, r4
	add r0, r3, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r4, _0811EFF8  @ =0x00000969
	add r0, r1, r4
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	sub r2, r2, r0
	sub r4, r4, #5
	add r0, r1, r4
	strh r2, [r0]
	ldr r2, _0811F010  @ =0x00000E47
	add r0, r1, r2
	add r0, r3, r0
	ldrb r2, [r0]
	ldr r3, _0811F014  @ =0x00000968
	add r0, r1, r3
	strb r2, [r0]
	add r5, r1, #0
	mov r7, #0
	ldr r4, _0811F018  @ =0x000015F9
	add r6, r5, r4
	ldr r0, _0811F01C  @ =0x00000B1E
	add r0, r0, r5
	mov r8, r0
_0811EF0C:
	mov r0, #4
	mov r1, #1
	bl sub_080AE870
	lsl r3, r0, #24
	asr r4, r3, #24
	cmp r4, #0
	blt _0811EFE2
	ldr r1, _0811F020  @ =0x00000E15
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	ldr r2, _0811F024  @ =0x00000E5B
	add r1, r5, r2
	add r1, r4, r1
	ldr r0, _0811F028  @ =gUnknown_08226484
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _0811F02C  @ =0x00000E1F
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #4
	strb r1, [r0]
	sub r2, r2, #50
	add r0, r5, r2
	add r0, r4, r0
	strb r7, [r0]
	ldr r1, _0811F030  @ =0x00000A74
	add r0, r5, r1
	add r0, r4, r0
	strb r7, [r0]
	add r2, r2, #20
	add r0, r5, r2
	add r0, r4, r0
	ldrb r1, [r6]
	strb r1, [r0]
	mov r0, #150
	lsl r0, r0, #4
	add r2, r5, r0
	ldr r1, _0811F034  @ =gUnknown_0817FAD2
	ldrb r0, [r6]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	ldrh r2, [r2]
	add r1, r1, r2
	ldr r2, _0811F000  @ =0x00000DCF
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
	add r2, r2, #20
	add r0, r5, r2
	add r0, r4, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r0, _0811F038  @ =0x00000964
	add r2, r5, r0
	ldr r1, _0811F03C  @ =gUnknown_0817FADA
	ldrb r0, [r6]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	ldrh r2, [r2]
	add r1, r1, r2
	ldr r2, _0811F008  @ =0x00000DC5
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
	add r2, r2, #20
	add r0, r5, r2
	add r0, r4, r0
	lsr r1, r1, #8
	strb r1, [r0]
	lsr r0, r3, #24
	bl sub_0811ED50
	ldr r3, _0811F040  @ =0x00000DF7
	add r1, r5, r3
	add r1, r4, r1
	ldr r2, _0811F044  @ =gUnknown_08171D62
	ldrb r0, [r6]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _0811F048  @ =0x00000DED
	add r1, r5, r0
	add r1, r4, r1
	ldr r2, _0811F04C  @ =gUnknown_08171D6E
	ldrb r0, [r6]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r2, _0811F010  @ =0x00000E47
	add r1, r5, r2
	add r1, r4, r1
	ldr r3, _0811F014  @ =0x00000968
	add r0, r5, r3
	ldrb r0, [r0]
	strb r0, [r1]
	mov r1, #195
	lsl r1, r1, #5
	add r0, r5, r1
	add r0, r4, r0
	mov r2, r8
	ldrh r1, [r2]
	strb r1, [r0]
_0811EFE2:
	ldrb r0, [r6]
	sub r0, r0, #1
	strb r0, [r6]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0811EF0C
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_0811EFF8:
	.4byte 0x00000969
_0811EFFC:
	.4byte gRam
_0811F000:
	.4byte 0x00000DCF
_0811F004:
	.4byte 0x00000DE3
_0811F008:
	.4byte 0x00000DC5
_0811F00C:
	.4byte 0x00000DD9
_0811F010:
	.4byte 0x00000E47
_0811F014:
	.4byte 0x00000968
_0811F018:
	.4byte 0x000015F9
_0811F01C:
	.4byte 0x00000B1E
_0811F020:
	.4byte 0x00000E15
_0811F024:
	.4byte 0x00000E5B
_0811F028:
	.4byte gUnknown_08226484
_0811F02C:
	.4byte 0x00000E1F
_0811F030:
	.4byte 0x00000A74
_0811F034:
	.4byte gUnknown_0817FAD2
_0811F038:
	.4byte 0x00000964
_0811F03C:
	.4byte gUnknown_0817FADA
_0811F040:
	.4byte 0x00000DF7
_0811F044:
	.4byte gUnknown_08171D62
_0811F048:
	.4byte 0x00000DED
_0811F04C:
	.4byte gUnknown_08171D6E
	THUMB_FUNC_END sub_0811EE68

