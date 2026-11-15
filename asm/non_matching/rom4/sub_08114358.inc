	THUMB_FUNC_START sub_08114358
sub_08114358: @ 0x08114358
	push {r4,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r4, _08114380  @ =gRam
	ldr r1, _08114384  @ =0x00001AE2
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _08114390
	ldr r1, _08114388  @ =0x00000FD2
	add r0, r4, r1
	add r0, r3, r0
	mov r2, #0
	mov r1, #48
	strb r1, [r0]
	ldr r1, _0811438C  @ =0x00000F52
	add r0, r4, r1
	add r0, r3, r0
	strb r2, [r0]
	b _08114396
_08114380:
	.4byte gRam
_08114384:
	.4byte 0x00001AE2
_08114388:
	.4byte 0x00000FD2
_0811438C:
	.4byte 0x00000F52
_08114390:
	add r0, r3, #0
	bl sub_0811439C
_08114396:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08114358

