	THUMB_FUNC_START sub_080869A8
sub_080869A8: @ 0x080869A8
	push {r4,r5,lr}
	ldr r2, _080869F0  @ =gRam
	lsl r4, r0, #1
	ldr r3, _080869F4  @ =0x000018D0
	add r1, r2, r3
	add r1, r4, r1
	ldrh r3, [r1]
	mov r5, #151
	lsl r5, r5, #4
	add r1, r2, r5
	strh r3, [r1]
	ldr r3, _080869F8  @ =0x00000B08
	add r1, r2, r3
	strh r0, [r1]
	ldr r5, _080869FC  @ =0x0000FFFF
	add r3, r5, #0
	and r0, r0, r3
	ldr r5, _08086A00  @ =0x00000C06
	add r1, r2, r5
	strh r0, [r1]
	and r0, r0, r3
	ldr r3, _08086A04  @ =0x00000968
	add r1, r2, r3
	strh r0, [r1]
	ldr r5, _08086A08  @ =0x000018F0
	add r2, r2, r5
	add r4, r4, r2
	ldrh r0, [r4]
	mov r1, #3
	and r1, r1, r0
	cmp r1, #0
	bne _08086A0C
	bl sub_08084C94
	b _08086A24
	.byte 0x00
	.byte 0x00
_080869F0:
	.4byte gRam
_080869F4:
	.4byte 0x000018D0
_080869F8:
	.4byte 0x00000B08
_080869FC:
	.4byte 0x0000FFFF
_08086A00:
	.4byte 0x00000C06
_08086A04:
	.4byte 0x00000968
_08086A08:
	.4byte 0x000018F0
_08086A0C:
	cmp r1, #1
	bne _08086A16
	bl sub_08084ED0
	b _08086A24
_08086A16:
	cmp r1, #2
	bne _08086A20
	bl sub_08085128
	b _08086A24
_08086A20:
	bl sub_080853DC
_08086A24:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080869A8

	.byte 0x00
	.byte 0x00
