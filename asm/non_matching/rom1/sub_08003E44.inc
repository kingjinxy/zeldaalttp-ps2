	thumb_func_start sub_08003E44
sub_08003E44: @ 0x08003E44
	push {r4}
	ldr r2, _08003ECC @ =0x03000840
_08003E48:
	ldr r3, [r2]
	cmp r0, r3
	bne _08003E74
	adds r4, r2, #0
_08003E50:
	adds r2, #4
	ldr r3, _08003ED0 @ =0x03000940
	cmp r2, r3
	bhs _08003E64
	ldr r3, [r2]
	cmp r0, r3
	beq _08003E50
	str r3, [r4]
	adds r4, #4
	b _08003E50
_08003E64:
	eors r3, r3
	str r3, [r4]
	adds r4, #4
	ldr r3, _08003ED4 @ =0x03000940
	cmp r4, r3
	blo _08003E64
	pop {r4}
	mov pc, lr
_08003E74:
	adds r2, #4
	ldr r3, _08003ED8 @ =0x03000940
	cmp r2, r3
	blo _08003E48
	pop {r4}
	mov pc, lr

