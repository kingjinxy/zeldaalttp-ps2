	THUMB_FUNC_START sub_081254E4
sub_081254E4: @ 0x081254E4
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	ldr r1, _08125590  @ =gRam
	ldr r2, _08125594  @ =0x00001B18
	add r0, r1, r2
	ldrb r6, [r0]
	lsl r0, r6, #1
	add r0, r6, r0
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #0
	beq _08125582
	add r5, r1, #0
	ldr r3, _08125598  @ =0x00001B1C
	add r3, r3, r5
	mov r9, r3
	ldr r0, _0812559C  @ =0x00001B2A
	add r0, r0, r5
	mov r8, r0
	sub r2, r2, #6
	add r7, r5, r2
_08125512:
	sub r0, r6, #1
	lsl r0, r0, #24
	lsr r6, r0, #24
	sub r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r3, r9
	ldr r2, [r3]
	add r0, r2, r4
	ldrb r1, [r0]
	ldr r3, _081255A0  @ =0x00001B26
	add r0, r5, r3
	strb r1, [r0]
	sub r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r2, r4
	ldrb r1, [r0]
	sub r3, r3, #1
	add r0, r5, r3
	strb r1, [r0]
	sub r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r2, r2, r4
	ldrb r1, [r2]
	ldr r2, _081255A4  @ =0x00001B24
	add r0, r5, r2
	strb r1, [r0]
	bl sub_081255B0
	bl sub_08125904
	mov r3, #218
	lsl r3, r3, #5
	add r1, r5, r3
	add r1, r6, r1
	ldr r2, _081255A8  @ =0x00001B28
	add r0, r5, r2
	ldrb r0, [r0]
	ldrb r3, [r7]
	add r0, r0, r3
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _081255AC  @ =0x00001B68
	add r1, r5, r0
	add r1, r6, r1
	sub r2, r2, #21
	add r0, r5, r2
	mov r3, r8
	ldrb r2, [r3]
	ldrb r0, [r0]
	sub r0, r0, r2
	strb r0, [r1]
	cmp r4, #0
	bne _08125512
_08125582:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08125590:
	.4byte gRam
_08125594:
	.4byte 0x00001B18
_08125598:
	.4byte 0x00001B1C
_0812559C:
	.4byte 0x00001B2A
_081255A0:
	.4byte 0x00001B26
_081255A4:
	.4byte 0x00001B24
_081255A8:
	.4byte 0x00001B28
_081255AC:
	.4byte 0x00001B68
	THUMB_FUNC_END sub_081254E4

