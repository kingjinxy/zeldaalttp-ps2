	THUMB_FUNC_START sub_08032220
sub_08032220: @ 0x08032220
	push {r4,r5,lr}
	mov r2, #0
	ldr r0, _08032248  @ =gUnknown_03006C80
	ldrb r0, [r0]
	cmp r2, r0
	bcs _0803225A
	ldr r4, _0803224C  @ =gUnknown_03000940
	mov r5, #128
	lsl r5, r5, #3
	add r3, r0, #0
_08032234:
	lsl r0, r2, #1
	add r0, r0, r4
	ldrh r1, [r0]
	add r0, r5, #0
	and r0, r0, r1
	cmp r0, #0
	beq _08032250
	mov r0, #1
	b _0803225C
	.byte 0x00
	.byte 0x00
_08032248:
	.4byte gUnknown_03006C80
_0803224C:
	.4byte gUnknown_03000940
_08032250:
	add r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, r3
	bcc _08032234
_0803225A:
	mov r0, #0
_0803225C:
	pop {r4,r5}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08032220

	.byte 0x00
	.byte 0x00
