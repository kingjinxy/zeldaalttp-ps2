	THUMB_FUNC_START sub_08125980
sub_08125980: @ 0x08125980
	push {lr}
	add r1, r0, #0
	ldr r2, _08125998  @ =gRam
	ldr r3, _0812599C  @ =0x00001B09
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _081259A0
	neg r0, r1
	bl sub_08125808
	b _081259B0
_08125998:
	.4byte gRam
_0812599C:
	.4byte 0x00001B09
_081259A0:
	ldr r1, _081259B4  @ =0x00001B2F
	add r0, r2, r1
	ldrb r0, [r0]
	lsr r0, r0, #4
	mov r1, #7
	and r0, r0, r1
	bl sub_08125E80
_081259B0:
	pop {r0}
	bx r0
_081259B4:
	.4byte 0x00001B2F
	THUMB_FUNC_END sub_08125980

