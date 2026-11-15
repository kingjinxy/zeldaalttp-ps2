	THUMB_FUNC_START sub_080E74CC
sub_080E74CC: @ 0x080E74CC
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	add r5, r3, #0
	ldr r4, _080E751C  @ =gRam
	ldr r0, _080E7520  @ =0x00001012
	add r1, r4, r0
	add r1, r3, r1
	ldrb r2, [r1]
	mov r0, #128
	orr r0, r0, r2
	strb r0, [r1]
	ldr r2, _080E7524  @ =0x00000E75
	add r1, r4, r2
	add r1, r3, r1
	ldrb r0, [r1]
	mov r2, #4
	orr r0, r0, r2
	strb r0, [r1]
	ldr r0, _080E7528  @ =0x00001032
	add r1, r4, r0
	add r1, r3, r1
	ldrb r2, [r1]
	mov r0, #64
	orr r0, r0, r2
	strb r0, [r1]
	ldr r1, _080E752C  @ =0x00000996
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _080E7534
	ldr r2, _080E7530  @ =0x00000FD2
	add r1, r4, r2
	add r1, r3, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _080E756A
_080E751C:
	.4byte gRam
_080E7520:
	.4byte 0x00001012
_080E7524:
	.4byte 0x00000E75
_080E7528:
	.4byte 0x00001032
_080E752C:
	.4byte 0x00000996
_080E7530:
	.4byte 0x00000FD2
_080E7534:
	ldr r1, _080E7550  @ =0x00000FD2
	add r0, r4, r1
	add r0, r3, r0
	ldrb r1, [r0]
	cmp r1, #0
	beq _080E7558
	cmp r1, #32
	bne _080E756A
	ldr r2, _080E7554  @ =0x00000FE2
	add r0, r4, r2
	add r0, r3, r0
	mov r1, #64
	b _080E7568
	.byte 0x00
	.byte 0x00
_080E7550:
	.4byte 0x00000FD2
_080E7554:
	.4byte 0x00000FE2
_080E7558:
	ldr r2, _080E7570  @ =0x00000F52
	add r0, r4, r2
	add r0, r5, r0
	strb r1, [r0]
	ldr r1, _080E7574  @ =0x00000FC2
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #16
_080E7568:
	strb r1, [r0]
_080E756A:
	pop {r4,r5}
	pop {r0}
	bx r0
_080E7570:
	.4byte 0x00000F52
_080E7574:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080E74CC

