	THUMB_FUNC_START sub_08125948
sub_08125948: @ 0x08125948
	push {lr}
	add r1, r0, #0
	ldr r2, _08125960  @ =gRam
	ldr r3, _08125964  @ =0x00001B09
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _08125968
	add r0, r1, #0
	bl sub_08125808
	b _08125976
_08125960:
	.4byte gRam
_08125964:
	.4byte 0x00001B09
_08125968:
	ldr r1, _0812597C  @ =0x00001B2F
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	bl sub_08125E80
_08125976:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812597C:
	.4byte 0x00001B2F
	THUMB_FUNC_END sub_08125948

