	THUMB_FUNC_START sub_080DBF70
sub_080DBF70: @ 0x080DBF70
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r2, _080DBFB0  @ =gRam
	ldr r0, _080DBFB4  @ =0x00001172
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r3, #0
	add r5, r2, #0
	ldr r1, _080DBFB8  @ =0x000009DA
	add r0, r5, r1
	ldrb r1, [r0]
	ldr r2, _080DBFBC  @ =gUnknown_08175F1C
_080DBF90:
	add r0, r3, r2
	ldrb r0, [r0]
	cmp r1, r0
	beq _080DBFA2
	add r0, r3, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, #0
	bne _080DBF90
_080DBFA2:
	ldr r1, _080DBFC0  @ =0x00001052
	add r0, r5, r1
	add r0, r4, r0
	strb r3, [r0]
	pop {r4,r5}
	pop {r0}
	bx r0
_080DBFB0:
	.4byte gRam
_080DBFB4:
	.4byte 0x00001172
_080DBFB8:
	.4byte 0x000009DA
_080DBFBC:
	.4byte gUnknown_08175F1C
_080DBFC0:
	.4byte 0x00001052
	THUMB_FUNC_END sub_080DBF70

