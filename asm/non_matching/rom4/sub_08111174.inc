	THUMB_FUNC_START sub_08111174
sub_08111174: @ 0x08111174
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _081111B4  @ =gRam
	ldr r2, _081111B8  @ =0x00000F52
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #1
	strb r2, [r1]
	ldr r5, _081111BC  @ =0x00000545
	add r4, r3, r5
	ldr r2, _081111C0  @ =gUnknown_0817D4BC
	ldr r5, _081111C4  @ =0x00000FB2
	add r1, r3, r5
	add r1, r0, r1
	ldrb r1, [r1]
	add r1, r1, r2
	ldrb r2, [r4]
	ldrb r1, [r1]
	and r1, r1, r2
	mov r2, #150
	lsl r2, r2, #4
	add r3, r3, r2
	strb r1, [r3]
	mov r1, #0
	mov r2, #2
	bl sub_08110BD8
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081111B4:
	.4byte gRam
_081111B8:
	.4byte 0x00000F52
_081111BC:
	.4byte 0x00000545
_081111C0:
	.4byte gUnknown_0817D4BC
_081111C4:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_08111174

