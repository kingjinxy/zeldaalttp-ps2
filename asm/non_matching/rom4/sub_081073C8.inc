	THUMB_FUNC_START sub_081073C8
sub_081073C8: @ 0x081073C8
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _081074AC  @ =gRam
	ldr r0, _081074B0  @ =0x00001052
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r1, #7
	and r0, r0, r1
	cmp r0, #0
	bne _081074A6
	add r0, r4, #0
	mov r1, #19
	bl sub_080CF140
	mov r1, #29
	ldr r2, _081074B4  @ =0x000011EF
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _08107414
	ldr r3, _081074B8  @ =0x000011D2
	add r2, r5, r3
_081073FC:
	lsl r0, r1, #24
	mov r1, #255
	lsl r1, r1, #24
	add r0, r0, r1
	lsr r1, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	blt _0810741C
	add r0, r0, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _081073FC
_08107414:
	lsl r0, r1, #24
	ldr r5, _081074AC  @ =gRam
	cmp r0, #0
	bge _08107438
_0810741C:
	ldr r0, _081074AC  @ =gRam
	ldr r2, _081074BC  @ =0x00001642
	add r3, r0, r2
	ldrb r1, [r3]
	sub r1, r1, #1
	strb r1, [r3]
	mov r2, #128
	and r1, r1, r2
	add r5, r0, #0
	cmp r1, #0
	beq _08107436
	mov r0, #29
	strb r0, [r3]
_08107436:
	ldrb r1, [r3]
_08107438:
	lsl r2, r1, #24
	asr r2, r2, #24
	ldr r3, _081074B8  @ =0x000011D2
	add r0, r5, r3
	add r0, r2, r0
	mov r1, #12
	strb r1, [r0]
	ldr r3, _081074C0  @ =0x000015F8
	add r0, r5, r3
	strb r1, [r0]
	ldr r1, _081074C4  @ =0x0000131C
	add r0, r5, r1
	add r0, r2, r0
	strb r4, [r0]
	ldr r3, _081074C8  @ =0x0000122C
	add r1, r5, r3
	add r1, r2, r1
	ldr r3, _081074CC  @ =0x00000EE2
	add r0, r5, r3
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _081074D0  @ =0x00001268
	add r1, r5, r0
	add r1, r2, r1
	add r3, r3, #32
	add r0, r5, r3
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _081074D4  @ =0x00000ED2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	sub r3, r3, #16
	add r0, r5, r3
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, #16
	ldr r3, _081074D8  @ =0x0000120E
	add r0, r5, r3
	add r0, r2, r0
	strb r1, [r0]
	add r3, r3, #60
	add r0, r5, r3
	add r0, r2, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r1, _081074DC  @ =0x000012FE
	add r0, r5, r1
	add r2, r2, r0
	mov r0, #127
	strb r0, [r2]
_081074A6:
	pop {r4,r5}
	pop {r0}
	bx r0
_081074AC:
	.4byte gRam
_081074B0:
	.4byte 0x00001052
_081074B4:
	.4byte 0x000011EF
_081074B8:
	.4byte 0x000011D2
_081074BC:
	.4byte 0x00001642
_081074C0:
	.4byte 0x000015F8
_081074C4:
	.4byte 0x0000131C
_081074C8:
	.4byte 0x0000122C
_081074CC:
	.4byte 0x00000EE2
_081074D0:
	.4byte 0x00001268
_081074D4:
	.4byte 0x00000ED2
_081074D8:
	.4byte 0x0000120E
_081074DC:
	.4byte 0x000012FE
	THUMB_FUNC_END sub_081073C8

