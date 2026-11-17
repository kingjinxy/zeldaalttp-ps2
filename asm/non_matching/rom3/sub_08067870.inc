	THUMB_FUNC_START sub_08067870
sub_08067870: @ 0x08067870
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	bl sub_0800099C
	add r1, r0, #0
	mov r0, #7
	and r1, r1, r0
	cmp r1, #8
	bls _08067886
	b _0806799C
_08067886:
	lsl r0, r1, #2
	ldr r1, _08067890  @ =0x08067894
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
_08067890:
	.4byte _08067890+0x4
	.4byte _080678B8
	.4byte _080678D8
	.4byte _080678F8
	.4byte _0806790C
	.4byte _0806792C
	.4byte _08067940
	.4byte _08067948
	.4byte _0806795C
	.4byte _08067984
_080678B8:
	ldr r0, _080678CC  @ =gUnknown_08445B9C
	add r1, r4, #0
	bl sub_0801386C
	ldr r0, _080678D0  @ =gUnknown_08445B9F
	add r1, r4, #0
	bl sub_0801386C
	ldr r0, _080678D4  @ =gUnknown_08445BA2
	b _0806796E
_080678CC:
	.4byte gUnknown_08445B9C
_080678D0:
	.4byte gUnknown_08445B9F
_080678D4:
	.4byte gUnknown_08445BA2
_080678D8:
	ldr r0, _080678EC  @ =gUnknown_08445B9C
	add r1, r4, #0
	bl sub_0801386C
	ldr r0, _080678F0  @ =gUnknown_08445B9F
	add r1, r4, #0
	bl sub_0801386C
	ldr r0, _080678F4  @ =gUnknown_08445BA5
	b _0806796E
_080678EC:
	.4byte gUnknown_08445B9C
_080678F0:
	.4byte gUnknown_08445B9F
_080678F4:
	.4byte gUnknown_08445BA5
_080678F8:
	ldr r0, _08067904  @ =gUnknown_08445B9C
	add r1, r4, #0
	bl sub_0801386C
	ldr r0, _08067908  @ =gUnknown_08445B9F
	b _08067966
_08067904:
	.4byte gUnknown_08445B9C
_08067908:
	.4byte gUnknown_08445B9F
_0806790C:
	ldr r0, _08067920  @ =gUnknown_08445B9C
	add r1, r4, #0
	bl sub_0801386C
	ldr r0, _08067924  @ =gUnknown_08445BA2
	add r1, r4, #0
	bl sub_0801386C
	ldr r0, _08067928  @ =gUnknown_08445BA5
	b _0806796E
_08067920:
	.4byte gUnknown_08445B9C
_08067924:
	.4byte gUnknown_08445BA2
_08067928:
	.4byte gUnknown_08445BA5
_0806792C:
	ldr r0, _08067938  @ =gUnknown_08445B9C
	add r1, r4, #0
	bl sub_0801386C
	ldr r0, _0806793C  @ =gUnknown_08445BA2
	b _08067966
_08067938:
	.4byte gUnknown_08445B9C
_0806793C:
	.4byte gUnknown_08445BA2
_08067940:
	ldr r0, _08067944  @ =gUnknown_08445B9C
	b _0806795E
_08067944:
	.4byte gUnknown_08445B9C
_08067948:
	ldr r0, _08067954  @ =gUnknown_08445B9F
	add r1, r4, #0
	bl sub_0801386C
	ldr r0, _08067958  @ =gUnknown_08445BA2
	b _08067966
_08067954:
	.4byte gUnknown_08445B9F
_08067958:
	.4byte gUnknown_08445BA2
_0806795C:
	ldr r0, _08067978  @ =gUnknown_08445B9F
_0806795E:
	add r1, r4, #0
	bl sub_0801386C
	ldr r0, _0806797C  @ =gUnknown_08445BA5
_08067966:
	add r1, r4, #0
	bl sub_0801386C
	ldr r0, _08067980  @ =gUnknown_08445BA8
_0806796E:
	add r1, r4, #0
	bl sub_0801386C
	b _0806799C
	.byte 0x00
	.byte 0x00
_08067978:
	.4byte gUnknown_08445B9F
_0806797C:
	.4byte gUnknown_08445BA5
_08067980:
	.4byte gUnknown_08445BA8
_08067984:
	ldr r0, _080679A4  @ =gUnknown_08445BA2
	add r1, r4, #0
	bl sub_0801386C
	ldr r0, _080679A8  @ =gUnknown_08445BA5
	add r1, r4, #0
	bl sub_0801386C
	ldr r0, _080679AC  @ =gUnknown_08445BA8
	add r1, r4, #0
	bl sub_0801386C
_0806799C:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080679A4:
	.4byte gUnknown_08445BA2
_080679A8:
	.4byte gUnknown_08445BA5
_080679AC:
	.4byte gUnknown_08445BA8
	THUMB_FUNC_END sub_08067870

