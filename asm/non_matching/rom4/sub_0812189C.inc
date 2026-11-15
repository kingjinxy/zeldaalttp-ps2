	THUMB_FUNC_START sub_0812189C
sub_0812189C: @ 0x0812189C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r1, _08121904  @ =gRam
	ldr r0, _08121908  @ =0x00001792
	add r2, r1, r0
	mov r3, #0
	mov r0, #2
	strb r0, [r2]
	ldr r2, _0812190C  @ =0x00001791
	add r1, r1, r2
	strb r3, [r1]
	mov r4, #9
_081218B6:
	ldr r0, _08121910  @ =gUnknown_020068EC
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	beq _081218D4
	add r0, r4, #0
	bl sub_08121710
	ldr r1, _08121914  @ =gUnknown_0200692A
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #2
	bne _081218D4
	mov r0, #0
	strb r0, [r5]
_081218D4:
	sub r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r0, #0
	bge _081218B6
	mov r4, #9
	ldr r2, _08121910  @ =gUnknown_020068EC
_081218E2:
	add r0, r4, r2
	ldrb r1, [r0]
	cmp r1, #0
	bne _081218FE
	sub r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r0, #0
	bge _081218E2
	ldr r0, _08121904  @ =gRam
	ldr r2, _08121918  @ =0x00000E15
	add r0, r0, r2
	add r0, r6, r0
	strb r1, [r0]
_081218FE:
	pop {r4-r6}
	pop {r0}
	bx r0
_08121904:
	.4byte gRam
_08121908:
	.4byte 0x00001792
_0812190C:
	.4byte 0x00001791
_08121910:
	.4byte gUnknown_020068EC
_08121914:
	.4byte gUnknown_0200692A
_08121918:
	.4byte 0x00000E15
	THUMB_FUNC_END sub_0812189C

