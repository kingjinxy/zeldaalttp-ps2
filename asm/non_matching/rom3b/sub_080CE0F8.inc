	THUMB_FUNC_START sub_080CE0F8
sub_080CE0F8: @ 0x080CE0F8
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r4, r0, #0
	bl sub_080CE380
	ldr r3, _080CE150  @ =gRam
	ldr r0, _080CE154  @ =0x00001286
	add r1, r3, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #3
	mov r6, #0
	strb r0, [r1]
	ldr r1, _080CE158  @ =0x0000122C
	add r0, r3, r1
	add r0, r4, r0
	ldr r2, _080CE15C  @ =0x00000952
	add r1, r3, r2
	ldrb r1, [r1]
	ldrb r0, [r0]
	sub r0, r0, r1
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r1, _080CE160  @ =0x0000120E
	add r0, r3, r1
	add r0, r4, r0
	add r2, r2, #6
	add r1, r3, r2
	ldrb r1, [r1]
	ldrb r0, [r0]
	sub r0, r0, r1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r5, #247
	bhi _080CE146
	cmp r2, #239
	bls _080CE168
_080CE146:
	ldr r1, _080CE164  @ =0x000011D2
	add r0, r3, r1
	add r0, r4, r0
	strb r6, [r0]
	b _080CE18A
_080CE150:
	.4byte gRam
_080CE154:
	.4byte 0x00001286
_080CE158:
	.4byte 0x0000122C
_080CE15C:
	.4byte 0x00000952
_080CE160:
	.4byte 0x0000120E
_080CE164:
	.4byte 0x000011D2
_080CE168:
	ldr r0, _080CE194  @ =gUnknown_03003E74
	ldrh r0, [r0]
	ldr r4, _080CE198  @ =0x00000996
	add r1, r3, r4
	ldrb r3, [r1]
	lsl r3, r3, #3
	mov r1, #192
	and r3, r3, r1
	mov r1, #52
	orr r3, r3, r1
	lsl r3, r3, #8
	mov r1, #172
	orr r3, r3, r1
	str r6, [sp]
	add r1, r5, #0
	bl sub_080C6368
_080CE18A:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CE194:
	.4byte gUnknown_03003E74
_080CE198:
	.4byte 0x00000996
	THUMB_FUNC_END sub_080CE0F8

