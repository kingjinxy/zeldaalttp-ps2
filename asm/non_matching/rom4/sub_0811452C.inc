	THUMB_FUNC_START sub_0811452C
sub_0811452C: @ 0x0811452C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r1, #217
	lsl r1, r1, #1
	add r0, r4, #0
	mov r2, #0
	bl sub_080C9164
	lsl r0, r0, #24
	cmp r0, #0
	beq _08114568
	ldr r1, _08114570  @ =gUnknown_020023F0
	mov r0, #1
	strb r0, [r1]
	ldr r2, _08114574  @ =gRam
	ldr r1, _08114578  @ =0x00000F52
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #10
	strb r1, [r0]
	ldr r0, _0811457C  @ =0x000016B4
	add r1, r2, r0
	mov r0, #1
	strb r0, [r1]
	ldr r1, _08114580  @ =0x000016B5
	add r2, r2, r1
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
_08114568:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08114570:
	.4byte gUnknown_020023F0
_08114574:
	.4byte gRam
_08114578:
	.4byte 0x00000F52
_0811457C:
	.4byte 0x000016B4
_08114580:
	.4byte 0x000016B5
	THUMB_FUNC_END sub_0811452C

