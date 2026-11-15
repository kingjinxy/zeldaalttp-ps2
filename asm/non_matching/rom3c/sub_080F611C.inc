	THUMB_FUNC_START sub_080F611C
sub_080F611C: @ 0x080F611C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080F617C  @ =gRam
	ldr r1, _080F6180  @ =0x00001172
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F615A
	bl sub_080AF16C
	bl sub_0809945C
	ldr r2, _080F6184  @ =0x00000FC2
	add r0, r5, r2
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _080F6152
	mov r0, #64
	strb r0, [r1]
_080F6152:
	add r0, r4, #0
	mov r1, #58
	bl sub_080CF0AC
_080F615A:
	ldr r3, _080F617C  @ =gRam
	ldr r1, _080F6184  @ =0x00000FC2
	add r0, r3, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r0, r1, #0
	cmp r0, #0
	beq _080F61C6
	cmp r0, #1
	beq _080F618C
	ldr r2, _080F6188  @ =0x000010C2
	add r0, r3, r2
	add r0, r4, r0
	add r1, r1, #19
	strb r1, [r0]
	b _080F61C6
	.byte 0x00
	.byte 0x00
_080F617C:
	.4byte gRam
_080F6180:
	.4byte 0x00001172
_080F6184:
	.4byte 0x00000FC2
_080F6188:
	.4byte 0x000010C2
_080F618C:
	ldr r1, _080F61CC  @ =0x00001172
	add r0, r3, r1
	add r0, r4, r0
	mov r2, #0
	strb r2, [r0]
	ldr r0, _080F61D0  @ =0x00000F52
	add r1, r3, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080F61D4  @ =0x000010C2
	add r0, r3, r1
	add r0, r4, r0
	strb r2, [r0]
	ldr r2, _080F61D8  @ =0x00001032
	add r1, r3, r2
	add r1, r4, r1
	ldrb r2, [r1]
	mov r0, #191
	and r0, r0, r2
	strb r0, [r1]
	ldr r0, _080F61DC  @ =0x00001012
	add r1, r3, r0
	add r1, r4, r1
	ldrb r2, [r1]
	mov r0, #127
	and r0, r0, r2
	strb r0, [r1]
_080F61C6:
	pop {r4,r5}
	pop {r0}
	bx r0
_080F61CC:
	.4byte 0x00001172
_080F61D0:
	.4byte 0x00000F52
_080F61D4:
	.4byte 0x000010C2
_080F61D8:
	.4byte 0x00001032
_080F61DC:
	.4byte 0x00001012
	THUMB_FUNC_END sub_080F611C

