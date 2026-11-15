	THUMB_FUNC_START sub_0811394C
sub_0811394C: @ 0x0811394C
	push {r4,r5,lr}
	add r4, r1, #0
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r0, _08113978  @ =gRam
	ldr r1, _0811397C  @ =0x00001718
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #3
	bne _08113984
	ldr r1, _08113980  @ =0x45100000
	add r0, r4, #0
	bl __ltsf2
	cmp r0, #0
	bge _08113984
	add r0, r5, #0
	mov r1, #0
	bl sub_081134D0
	b _081139BA
	.byte 0x00
	.byte 0x00
_08113978:
	.4byte gRam
_0811397C:
	.4byte 0x00001718
_08113980:
	.4byte 0x45100000
_08113984:
	ldr r1, _081139A4  @ =0x44AB2000
	add r0, r4, #0
	bl __ltsf2
	cmp r0, #0
	bge _081139A8
	bl GetRandomInt
	mov r1, #31
	and r1, r1, r0
	cmp r1, #0
	bne _081139A8
	add r0, r5, #0
	bl sub_081127B8
	b _081139BA
_081139A4:
	.4byte 0x44AB2000
_081139A8:
	ldr r1, _081139C0  @ =0x44100000
	add r0, r4, #0
	bl __ltsf2
	cmp r0, #0
	bge _081139BA
	add r0, r5, #0
	bl sub_08112094
_081139BA:
	pop {r4,r5}
	pop {r0}
	bx r0
_081139C0:
	.4byte 0x44100000
	THUMB_FUNC_END sub_0811394C

