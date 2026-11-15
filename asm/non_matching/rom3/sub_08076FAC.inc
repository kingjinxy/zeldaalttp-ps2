	THUMB_FUNC_START sub_08076FAC
sub_08076FAC: @ 0x08076FAC
	push {r4-r6,lr}
	bl sub_08077848
	ldr r0, _08076FF8  @ =gRam
	ldr r1, _08076FFC  @ =0x00000C08
	add r6, r0, r1
	ldrh r3, [r6]
	lsl r2, r3, #16
	lsr r1, r2, #16
	cmp r1, #0
	beq _0807704A
	ldr r0, _08077000  @ =0x0000FFFF
	cmp r1, r0
	beq _08077040
	cmp r2, #0
	blt _08077008
	ldr r4, _08077004  @ =0x00003690
	ldrh r1, [r6]
	add r0, r4, #0
	bl sub_0809260C
	ldrh r1, [r6]
	add r0, r4, #0
	bl sub_0809265C
	add r4, r4, #8
	ldrh r1, [r6]
	add r1, r1, #2
	add r0, r4, #0
	bl sub_0809260C
	ldrh r1, [r6]
	add r1, r1, #2
	add r0, r4, #0
	bl sub_0809265C
	b _08077040
	.byte 0x00
	.byte 0x00
_08076FF8:
	.4byte gRam
_08076FFC:
	.4byte 0x00000C08
_08077000:
	.4byte 0x0000FFFF
_08077004:
	.4byte 0x00003690
_08077008:
	ldr r5, _08077054  @ =0x000036D0
	ldr r4, _08077058  @ =0x00001FFF
	add r1, r4, #0
	and r1, r1, r3
	add r0, r5, #0
	bl sub_0809260C
	ldrh r0, [r6]
	add r1, r4, #0
	and r1, r1, r0
	add r0, r5, #0
	bl sub_0809265C
	add r5, r5, #4
	ldrh r0, [r6]
	add r1, r4, #0
	and r1, r1, r0
	add r1, r1, #2
	add r0, r5, #0
	bl sub_0809260C
	ldrh r0, [r6]
	and r4, r4, r0
	add r4, r4, #2
	add r0, r5, #0
	add r1, r4, #0
	bl sub_0809265C
_08077040:
	ldr r0, _0807705C  @ =gRam
	ldr r1, _08077060  @ =0x00000C08
	add r0, r0, r1
	mov r1, #0
	strh r1, [r0]
_0807704A:
	bl sub_08076F30
	pop {r4-r6}
	pop {r0}
	bx r0
_08077054:
	.4byte 0x000036D0
_08077058:
	.4byte 0x00001FFF
_0807705C:
	.4byte gRam
_08077060:
	.4byte 0x00000C08
	THUMB_FUNC_END sub_08076FAC

