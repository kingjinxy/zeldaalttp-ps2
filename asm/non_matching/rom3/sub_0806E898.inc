	THUMB_FUNC_START sub_0806E898
sub_0806E898: @ 0x0806E898
	push {lr}
	ldr r2, _0806E8CC  @ =gRam
	ldr r0, _0806E8D0  @ =0x00001804
	add r1, r2, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _0806E8B2
	mov r0, #0
	strb r0, [r1]
	ldr r0, _0806E8D4  @ =0x00001719
	add r1, r2, r0
	mov r0, #2
	strb r0, [r1]
_0806E8B2:
	ldr r1, _0806E8D8  @ =0x00000B0A
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	beq _0806E8E0
	ldr r0, _0806E8DC  @ =0x00000504
	add r1, r2, r0
	mov r0, #51
	bl sub_0812A324
	b _0806E8EA
_0806E8CC:
	.4byte gRam
_0806E8D0:
	.4byte 0x00001804
_0806E8D4:
	.4byte 0x00001719
_0806E8D8:
	.4byte 0x00000B0A
_0806E8DC:
	.4byte 0x00000504
_0806E8E0:
	ldr r0, _0806E914  @ =0x00000504
	add r1, r2, r0
	mov r0, #49
	bl sub_0812A324
_0806E8EA:
	ldr r1, _0806E918  @ =gRam
	ldr r2, _0806E91C  @ =0x000009DA
	add r0, r1, r2
	ldrh r0, [r0]
	add r2, r1, #0
	cmp r0, #48
	beq _0806E8FC
	cmp r0, #64
	bne _0806E904
_0806E8FC:
	ldr r0, _0806E920  @ =0x00000A3C
	add r1, r2, r0
	ldr r0, _0806E924  @ =0x0000FFF1
	strh r0, [r1]
_0806E904:
	ldr r0, _0806E928  @ =0x00000A4C
	add r1, r2, r0
	mov r0, #0
	strh r0, [r1]
	bl sub_0806D93C
	pop {r0}
	bx r0
_0806E914:
	.4byte 0x00000504
_0806E918:
	.4byte gRam
_0806E91C:
	.4byte 0x000009DA
_0806E920:
	.4byte 0x00000A3C
_0806E924:
	.4byte 0x0000FFF1
_0806E928:
	.4byte 0x00000A4C
	THUMB_FUNC_END sub_0806E898

