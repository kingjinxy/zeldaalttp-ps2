	THUMB_FUNC_START sub_0807B650
sub_0807B650: @ 0x0807B650
	push {lr}
	ldr r0, _0807B684  @ =gUnknown_020022DB
	ldrb r1, [r0]
	mov r0, #32
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	bne _0807B67E
	ldr r3, _0807B688  @ =gRam
	ldr r1, _0807B68C  @ =0x00000AA8
	add r0, r3, r1
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #8
	and r0, r0, r1
	cmp r0, #0
	beq _0807B67E
	ldr r1, _0807B690  @ =0x000009E6
	add r0, r3, r1
	strb r2, [r0]
	bl sub_08075804
_0807B67E:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807B684:
	.4byte gUnknown_020022DB
_0807B688:
	.4byte gRam
_0807B68C:
	.4byte 0x00000AA8
_0807B690:
	.4byte 0x000009E6
	THUMB_FUNC_END sub_0807B650

