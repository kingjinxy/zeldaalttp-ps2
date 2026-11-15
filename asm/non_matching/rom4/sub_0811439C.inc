	THUMB_FUNC_START sub_0811439C
sub_0811439C: @ 0x0811439C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r1, _081143C4  @ =gRam
	ldr r2, _081143C8  @ =0x00000FF2
	add r0, r1, r2
	add r0, r5, r0
	ldrb r4, [r0]
	ldr r3, _081143CC  @ =gUnknown_0817D916
	ldrb r2, [r3]
	add r0, r2, #0
	add r6, r1, #0
	cmp r0, #255
	beq _081143DC
	mov r1, #2
_081143BA:
	cmp r4, r2
	bne _081143D0
	add r2, r1, #0
	b _081143E0
	.byte 0x00
	.byte 0x00
_081143C4:
	.4byte gRam
_081143C8:
	.4byte 0x00000FF2
_081143CC:
	.4byte gUnknown_0817D916
_081143D0:
	add r1, r1, #1
	add r3, r3, #1
	ldrb r2, [r3]
	add r0, r2, #0
	cmp r0, #255
	bne _081143BA
_081143DC:
	mov r2, #1
	neg r2, r2
_081143E0:
	ldr r1, _081143F8  @ =0x000016B4
	add r0, r6, r1
	mov r1, #0
	strb r2, [r0]
	ldr r2, _081143FC  @ =0x00000FA2
	add r0, r6, r2
	add r0, r5, r0
	strb r1, [r0]
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081143F8:
	.4byte 0x000016B4
_081143FC:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_0811439C

