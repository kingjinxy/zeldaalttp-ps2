	THUMB_FUNC_START sub_0806D460
sub_0806D460: @ 0x0806D460
	push {r4,r5,lr}
	ldr r1, _0806D4E4  @ =gRam
	ldr r2, _0806D4E8  @ =0x00000952
	add r0, r1, r2
	ldrh r2, [r0]
	mov r3, #149
	lsl r3, r3, #4
	add r0, r1, r3
	strh r2, [r0]
	ldr r5, _0806D4EC  @ =0x00000958
	add r0, r1, r5
	ldrh r2, [r0]
	add r3, r3, #6
	add r0, r1, r3
	strh r2, [r0]
	add r5, r5, #130
	add r0, r1, r5
	ldrh r0, [r0]
	add r4, r1, #0
	cmp r0, #54
	beq _0806D4C6
	cmp r0, #56
	beq _0806D4C6
	ldr r1, _0806D4F0  @ =gUnknown_0814CAD4
	ldr r2, _0806D4F4  @ =0x00000ABA
	add r0, r4, r2
	ldrh r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	mov r3, #22
	cmp r0, #0
	beq _0806D4A8
	mov r3, #139
	lsl r3, r3, #1
_0806D4A8:
	ldr r5, _0806D4F8  @ =0x000009B4
	add r2, r4, r5
	ldrh r0, [r2]
	cmp r3, r0
	beq _0806D4C6
	ldrb r1, [r2]
	cmp r1, #23
	beq _0806D4C4
	add r5, r5, #1
	add r0, r4, r5
	ldrb r0, [r0]
	orr r0, r0, r1
	cmp r0, #23
	beq _0806D4C6
_0806D4C4:
	strh r3, [r2]
_0806D4C6:
	ldr r1, _0806D4FC  @ =0x00000CF5
	add r0, r4, r1
	ldr r2, _0806D500  @ =0x00000CF6
	add r1, r4, r2
	ldrb r2, [r0]
	ldrb r0, [r1]
	orr r0, r0, r2
	cmp r0, #0
	beq _0806D51C
	cmp r2, #0
	beq _0806D508
	ldr r3, _0806D504  @ =0x00000B02
	add r0, r4, r3
	ldrh r0, [r0]
	b _0806D50A
_0806D4E4:
	.4byte gRam
_0806D4E8:
	.4byte 0x00000952
_0806D4EC:
	.4byte 0x00000958
_0806D4F0:
	.4byte gUnknown_0814CAD4
_0806D4F4:
	.4byte 0x00000ABA
_0806D4F8:
	.4byte 0x000009B4
_0806D4FC:
	.4byte 0x00000CF5
_0806D500:
	.4byte 0x00000CF6
_0806D504:
	.4byte 0x00000B02
_0806D508:
	mov r0, #3
_0806D50A:
	bl sub_0806C4EC
	bl sub_08070CC8
	ldr r0, _0806D550  @ =gRam
	ldr r5, _0806D554  @ =0x00000CFC
	add r0, r0, r5
	mov r1, #0
	strh r1, [r0]
_0806D51C:
	bl sub_0806C620
	ldr r2, _0806D550  @ =gRam
	ldr r1, _0806D558  @ =0x000009DA
	add r0, r2, r1
	ldrh r0, [r0]
	cmp r0, #172
	bne _0806D574
	ldr r3, _0806D55C  @ =0x0000051E
	add r1, r2, r3
	ldr r0, _0806D560  @ =0x00003C42
	strh r0, [r1]
	ldr r5, _0806D564  @ =0x00000998
	add r1, r2, r5
	mov r0, #14
	strb r0, [r1]
	ldr r0, _0806D568  @ =0x00000999
	add r1, r2, r0
	mov r0, #16
	strb r0, [r1]
	ldr r1, _0806D56C  @ =0x00000514
	add r2, r2, r1
	ldrh r1, [r2]
	ldr r0, _0806D570  @ =0x0000FFFC
	and r0, r0, r1
	b _0806D586
_0806D550:
	.4byte gRam
_0806D554:
	.4byte 0x00000CFC
_0806D558:
	.4byte 0x000009DA
_0806D55C:
	.4byte 0x0000051E
_0806D560:
	.4byte 0x00003C42
_0806D564:
	.4byte 0x00000998
_0806D568:
	.4byte 0x00000999
_0806D56C:
	.4byte 0x00000514
_0806D570:
	.4byte 0x0000FFFC
_0806D574:
	cmp r0, #164
	bne _0806D588
	ldr r3, _0806D590  @ =0x00000514
	add r2, r2, r3
	ldrh r1, [r2]
	ldr r0, _0806D594  @ =0x0000FFFC
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
_0806D586:
	strh r0, [r2]
_0806D588:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806D590:
	.4byte 0x00000514
_0806D594:
	.4byte 0x0000FFFC
	THUMB_FUNC_END sub_0806D460

