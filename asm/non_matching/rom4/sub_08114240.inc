	THUMB_FUNC_START sub_08114240
sub_08114240: @ 0x08114240
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r1, #216
	lsl r1, r1, #1
	ldr r0, _08114260  @ =gRam
	ldr r2, _08114264  @ =0x000016B5
	add r0, r0, r2
	ldrb r0, [r0]
	cmp r0, #4
	beq _0811426C
	cmp r0, #4
	bgt _08114268
	cmp r0, #1
	beq _0811426C
	b _0811426E
_08114260:
	.4byte gRam
_08114264:
	.4byte 0x000016B5
_08114268:
	cmp r0, #7
	bne _0811426E
_0811426C:
	ldr r1, _081142A0  @ =0x000001B1
_0811426E:
	add r0, r4, #0
	mov r2, #0
	bl sub_080C9164
	lsl r0, r0, #24
	cmp r0, #0
	beq _0811429A
	ldr r1, _081142A4  @ =gRam
	ldr r0, _081142A8  @ =0x000016B5
	add r2, r1, r0
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	ldr r0, _081142AC  @ =0x000016B4
	add r2, r1, r0
	mov r0, #1
	strb r0, [r2]
	ldr r2, _081142B0  @ =0x00000F52
	add r1, r1, r2
	add r1, r4, r1
	mov r0, #5
	strb r0, [r1]
_0811429A:
	pop {r4}
	pop {r0}
	bx r0
_081142A0:
	.4byte 0x000001B1
_081142A4:
	.4byte gRam
_081142A8:
	.4byte 0x000016B5
_081142AC:
	.4byte 0x000016B4
_081142B0:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_08114240

