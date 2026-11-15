	THUMB_FUNC_START sub_08072748
sub_08072748: @ 0x08072748
	push {r4,r5,lr}
	bl sub_08096F30
	mov r4, #2
	ldr r1, _08072770  @ =gRam
	ldr r2, _08072774  @ =0x00000C0E
	add r0, r1, r2
	ldrh r2, [r0]
	mov r0, #1
	and r0, r0, r2
	cmp r0, #0
	bne _08072762
	sub r4, r4, #4
_08072762:
	mov r0, #2
	and r0, r0, r2
	cmp r0, #0
	beq _0807277C
	ldr r3, _08072778  @ =0x000016C4
	add r1, r1, r3
	b _08072782
_08072770:
	.4byte gRam
_08072774:
	.4byte 0x00000C0E
_08072778:
	.4byte 0x000016C4
_0807277C:
	mov r0, #182
	lsl r0, r0, #5
	add r1, r1, r0
_08072782:
	ldrh r0, [r1]
	add r0, r0, r4
	strh r0, [r1]
	mov r4, #255
	and r4, r4, r0
	ldr r2, _080727CC  @ =gUnknown_0814D5C4
	ldr r1, _080727D0  @ =gRam
	ldr r3, _080727D4  @ =0x00000C0E
	add r0, r1, r3
	ldrh r3, [r0]
	lsl r0, r3, #1
	add r0, r0, r2
	add r5, r1, #0
	ldrh r0, [r0]
	cmp r4, r0
	beq _080727A4
	b _080728E8
_080727A4:
	mov r0, #2
	and r3, r3, r0
	cmp r3, #0
	beq _080727E4
	ldr r4, _080727D8  @ =0x00000952
	add r0, r5, r4
	ldrh r1, [r0]
	mov r0, #240
	lsl r0, r0, #5
	and r0, r0, r1
	ldr r2, _080727DC  @ =0x00000B98
	add r1, r5, r2
	strh r0, [r1]
	mov r3, #128
	lsl r3, r3, #1
	add r1, r3, #0
	add r0, r0, r1
	ldr r4, _080727E0  @ =0x00000B9A
	b _08072800
	.byte 0x00
	.byte 0x00
_080727CC:
	.4byte gUnknown_0814D5C4
_080727D0:
	.4byte gRam
_080727D4:
	.4byte 0x00000C0E
_080727D8:
	.4byte 0x00000952
_080727DC:
	.4byte 0x00000B98
_080727E0:
	.4byte 0x00000B9A
_080727E4:
	ldr r1, _08072830  @ =0x00000958
	add r0, r5, r1
	ldrh r1, [r0]
	mov r0, #240
	lsl r0, r0, #5
	and r0, r0, r1
	ldr r2, _08072834  @ =0x00000B94
	add r1, r5, r2
	strh r0, [r1]
	mov r3, #128
	lsl r3, r3, #1
	add r1, r3, #0
	add r0, r0, r1
	ldr r4, _08072838  @ =0x00000B96
_08072800:
	add r1, r5, r4
	strh r0, [r1]
	ldr r2, _0807283C  @ =gUnknown_0814CFA2
	ldr r1, _08072840  @ =0x000009C6
	add r0, r5, r1
	ldrh r1, [r0]
	mov r0, #63
	and r0, r0, r1
	lsl r3, r0, #1
	add r2, r3, r2
	ldrh r2, [r2]
	ldr r4, _08072844  @ =0x000009BC
	add r0, r5, r4
	strh r2, [r0]
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #129
	bne _0807284C
	ldr r0, _08072848  @ =0x000009BE
	add r1, r5, r0
	mov r0, #128
	lsl r0, r0, #2
	strh r0, [r1]
	b _08072858
_08072830:
	.4byte 0x00000958
_08072834:
	.4byte 0x00000B94
_08072838:
	.4byte 0x00000B96
_0807283C:
	.4byte gUnknown_0814CFA2
_08072840:
	.4byte 0x000009C6
_08072844:
	.4byte 0x000009BC
_08072848:
	.4byte 0x000009BE
_0807284C:
	ldr r0, _0807288C  @ =gUnknown_0814D022
	add r0, r3, r0
	ldrh r1, [r0]
	ldr r2, _08072890  @ =0x000009BE
	add r0, r5, r2
	strh r1, [r0]
_08072858:
	add r2, r5, #0
	ldr r3, _08072894  @ =0x000009AD
	add r0, r2, r3
	mov r1, #0
	strb r1, [r0]
	ldr r4, _08072898  @ =0x000009E8
	add r0, r2, r4
	strh r1, [r0]
	ldr r1, _0807289C  @ =0x00000A42
	add r0, r2, r1
	ldrh r1, [r0]
	ldr r0, _080728A0  @ =0x0000FFF1
	cmp r1, r0
	bne _080728D4
	add r3, r3, #25
	add r0, r2, r3
	ldrh r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	beq _080728A4
	add r4, r4, #84
	add r1, r2, r4
	mov r0, #14
	b _080728AA
	.byte 0x00
	.byte 0x00
_0807288C:
	.4byte gUnknown_0814D022
_08072890:
	.4byte 0x000009BE
_08072894:
	.4byte 0x000009AD
_08072898:
	.4byte 0x000009E8
_0807289C:
	.4byte 0x00000A42
_080728A0:
	.4byte 0x0000FFF1
_080728A4:
	ldr r0, _080728C8  @ =0x00000A3C
	add r1, r2, r0
	mov r0, #7
_080728AA:
	strh r0, [r1]
	ldr r1, _080728CC  @ =0x000009C6
	add r0, r5, r1
	ldrh r0, [r0]
	cmp r0, #24
	bne _080728E8
	ldr r2, _080728D0  @ =0x0000165E
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #2
	bhi _080728E8
	ldr r3, _080728C8  @ =0x00000A3C
	add r1, r5, r3
	mov r0, #8
	b _080728E6
_080728C8:
	.4byte 0x00000A3C
_080728CC:
	.4byte 0x000009C6
_080728D0:
	.4byte 0x0000165E
_080728D4:
	bl sub_0812A130
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bne _080728E8
	ldr r4, _080728F0  @ =0x00000A3C
	add r1, r5, r4
	ldr r0, _080728F4  @ =0x0000FFF3
_080728E6:
	strh r0, [r1]
_080728E8:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080728F0:
	.4byte 0x00000A3C
_080728F4:
	.4byte 0x0000FFF3
	THUMB_FUNC_END sub_08072748

