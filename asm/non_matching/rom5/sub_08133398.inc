	THUMB_FUNC_START sub_08133398
sub_08133398: @ 0x08133398
	push {r4,lr}
	ldr r2, _081333D8  @ =gUnknown_0822BB64
	ldr r1, _081333DC  @ =gRam
	mov r3, #203
	lsl r3, r3, #4
	add r0, r1, r3
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r0, [r0]
	mov r3, #7
	lsl r0, r0, #1
	ldr r4, _081333E0  @ =gUnknown_02031800
	add r2, r0, r4
	mov r0, #202
	lsl r0, r0, #4
	add r1, r1, r0
	ldrh r0, [r1]
	lsl r0, r0, #1
	ldr r4, _081333E4  @ =gUnknown_020008E0
	add r1, r0, r4
_081333C2:
	ldrh r0, [r2]
	strh r0, [r1]
	add r2, r2, #2
	add r1, r1, #2
	sub r3, r3, #1
	cmp r3, #0
	bge _081333C2
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081333D8:
	.4byte gUnknown_0822BB64
_081333DC:
	.4byte gRam
_081333E0:
	.4byte gUnknown_02031800
_081333E4:
	.4byte gUnknown_020008E0
	THUMB_FUNC_END sub_08133398

