	THUMB_FUNC_START sub_08096F30
sub_08096F30: @ 0x08096F30
	push {lr}
	ldr r0, _08096F48  @ =gRam
	ldr r2, _08096F4C  @ =0x00001718
	add r1, r0, r2
	ldrb r1, [r1]
	add r3, r0, #0
	cmp r1, #4
	bne _08096F50
	bl sub_0809722C
	b _0809701C
	.byte 0x00
	.byte 0x00
_08096F48:
	.4byte gRam
_08096F4C:
	.4byte 0x00001718
_08096F50:
	ldr r1, _08096FA4  @ =0x000016CC
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809701C
	mov r2, #150
	lsl r2, r2, #4
	add r1, r3, r2
	strb r0, [r1]
	ldr r2, _08096FA8  @ =0x000017DA
	add r0, r3, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _08096F74
	sub r2, r2, #12
	add r0, r3, r2
	ldrb r0, [r0]
	strb r0, [r1]
_08096F74:
	ldr r2, _08096FAC  @ =0x00001705
	add r0, r3, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _08097018
	add r2, r2, #37
	add r0, r3, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _08096FC8
	add r2, r2, #2
	add r0, r3, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _08096FB0
	lsl r0, r0, #1
	mov r2, #4
	neg r2, r2
	add r1, r2, #0
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r2, r0, #24
	b _08096FDC
	.byte 0x00
	.byte 0x00
_08096FA4:
	.4byte 0x000016CC
_08096FA8:
	.4byte 0x000017DA
_08096FAC:
	.4byte 0x00001705
_08096FB0:
	ldr r2, _08096FF8  @ =0x000016D5
	add r0, r3, r2
	ldrb r0, [r0]
	lsr r0, r0, #1
	mov r2, #0
	ldrsb r2, [r1, r2]
	ldr r1, _08096FFC  @ =gUnknown_08167DB2
	add r0, r0, r1
	ldrb r0, [r0]
	and r2, r2, r0
	cmp r2, #0
	bne _08097018
_08096FC8:
	mov r2, #4
	mov r1, #150
	lsl r1, r1, #4
	add r0, r3, r1
	ldrb r1, [r0]
	mov r0, #12
	and r0, r0, r1
	cmp r0, #0
	beq _08096FDC
	mov r2, #0
_08096FDC:
	cmp r2, #4
	beq _08097000
	mov r1, #150
	lsl r1, r1, #4
	add r0, r3, r1
	ldrb r1, [r0]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	beq _08097012
	add r0, r2, #2
	lsl r0, r0, #24
	lsr r2, r0, #24
	b _08097012
_08096FF8:
	.4byte 0x000016D5
_08096FFC:
	.4byte gUnknown_08167DB2
_08097000:
	mov r1, #150
	lsl r1, r1, #4
	add r0, r3, r1
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _08097012
	mov r2, #6
_08097012:
	ldr r1, _08097020  @ =0x000016D5
	add r0, r3, r1
	strb r2, [r0]
_08097018:
	bl sub_08097024
_0809701C:
	pop {r0}
	bx r0
_08097020:
	.4byte 0x000016D5
	THUMB_FUNC_END sub_08096F30

