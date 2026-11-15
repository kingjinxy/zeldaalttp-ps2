	THUMB_FUNC_START sub_081144EC
sub_081144EC: @ 0x081144EC
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r1, #218
	lsl r1, r1, #1
	add r0, r4, #0
	mov r2, #0
	bl sub_080C9164
	lsl r0, r0, #24
	cmp r0, #0
	beq _08114518
	ldr r2, _08114520  @ =gRam
	ldr r1, _08114524  @ =0x00000F52
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #6
	strb r1, [r0]
	ldr r0, _08114528  @ =0x000016B4
	add r2, r2, r0
	mov r0, #1
	strb r0, [r2]
_08114518:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08114520:
	.4byte gRam
_08114524:
	.4byte 0x00000F52
_08114528:
	.4byte 0x000016B4
	THUMB_FUNC_END sub_081144EC

